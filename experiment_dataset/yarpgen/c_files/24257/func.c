/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24257
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [21LL] [i_0] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 0U))))))), ((-((~(4294967295U)))))));
                                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2U), (((/* implicit */unsigned int) 405677099))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_3]))) : (max((3ULL), (((/* implicit */unsigned long long int) (signed char)10))))))) ? (max((((/* implicit */unsigned long long int) (short)-30877)), ((~(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_13 -= (~(((/* implicit */int) arr_1 [i_0] [i_0])));
                                var_14 = ((/* implicit */int) (-(((unsigned long long int) ((unsigned long long int) arr_7 [i_0] [i_6])))));
                                arr_23 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (((unsigned char) (~(((/* implicit */int) (unsigned char)208)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), ((((!(((/* implicit */_Bool) 9897402146876226810ULL)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (min(((~(-873566606))), (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_16 = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])), (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6151316028656367413LL))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)47)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        for (int i_13 = 0; i_13 < 23; i_13 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) 4294967294U);
                                arr_45 [i_13] [5] [i_9] [i_12] [i_10] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)208))))) ? ((-(((/* implicit */int) (unsigned short)61545)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_9] [i_10] [i_11] [i_12] [i_13] [(unsigned char)7]))))))))));
                                arr_46 [i_12] [i_12] [i_12] [i_12] [i_13] [i_12] [i_13] = ((/* implicit */_Bool) ((signed char) (-((+(arr_35 [i_11]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        for (int i_15 = 1; i_15 < 19; i_15 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1965166096), (((/* implicit */int) (unsigned char)131))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_32 [i_14] [i_11])) ? (15975346728482633566ULL) : (((/* implicit */unsigned long long int) arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] [(unsigned short)14] [i_9])))))) : (((int) max((((/* implicit */int) arr_36 [i_11])), (-447617975))))));
                                var_19 = ((/* implicit */unsigned short) min((max((8485906848448326275ULL), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)47)), ((short)-32765)))))), (((/* implicit */unsigned long long int) (unsigned short)1008))));
                                var_20 = ((/* implicit */unsigned short) 3789649326888903230ULL);
                                arr_51 [i_14] [i_10 - 1] [i_11] = ((/* implicit */int) min(((-(max((((/* implicit */unsigned int) arr_9 [i_9])), (4294967294U))))), (((/* implicit */unsigned int) ((short) 60717275)))));
                                arr_52 [i_9] [i_10] [i_11] [i_14] [i_15] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)146))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
    {
        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            for (int i_18 = 0; i_18 < 16; i_18 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) (+((-(17U)))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_16] [i_17] [i_17] [10ULL] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_16] [i_17] [(_Bool)1] [i_20]))) : (-3111486212407528402LL)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        for (unsigned long long int i_22 = 2; i_22 < 14; i_22 += 3) 
                        {
                            {
                                arr_71 [(_Bool)0] [i_16] [i_18] [i_18] [i_17] [i_16] [i_16] = ((/* implicit */signed char) (-(60717275)));
                                var_23 = ((/* implicit */unsigned char) arr_34 [i_21]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
