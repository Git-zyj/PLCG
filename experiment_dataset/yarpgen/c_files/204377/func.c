/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204377
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) (~(((26095564238183032LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))))));
                    var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)73)) && (((/* implicit */_Bool) ((var_16) | (((/* implicit */unsigned long long int) -1813065677461651684LL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2])))))));
                                var_21 = ((/* implicit */int) max((((unsigned short) arr_12 [i_1] [i_1 - 1])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 2; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_22 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 + 1]))))));
                            arr_28 [i_5] [i_6] [i_7 + 1] [i_6] = ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) (~(-26095564238183039LL)));
                            arr_35 [i_5] [i_6] = ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551608ULL))))), (max((arr_30 [i_5 + 1] [i_5 - 1] [i_6]), (((/* implicit */short) arr_31 [i_10] [i_10] [i_5 + 1] [i_5] [7U]))))));
                            var_24 = ((/* implicit */short) (+(((/* implicit */int) arr_25 [i_5 - 1] [i_6]))));
                            arr_36 [i_6] [i_5 + 1] [i_9] [(unsigned char)6] [i_5] [i_5 + 1] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */long long int) var_14)) - (arr_18 [i_5]))))) <= (((/* implicit */int) ((short) ((((/* implicit */_Bool) 12186938740804145044ULL)) ? (((/* implicit */int) arr_29 [7ULL] [i_6] [(unsigned short)0] [(_Bool)1])) : (((/* implicit */int) arr_19 [i_10] [i_6]))))))));
                            var_25 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_8)))), (var_0)));
    /* LoopNest 2 */
    for (int i_11 = 4; i_11 < 17; i_11 += 4) 
    {
        for (signed char i_12 = 1; i_12 < 16; i_12 += 4) 
        {
            {
                var_27 = (i_12 % 2 == 0) ? (((/* implicit */signed char) (((((~(-1276172445))) + (((int) arr_41 [i_12] [i_12])))) * (((/* implicit */int) max((arr_37 [i_11 + 2]), (arr_37 [i_11 - 4]))))))) : (((/* implicit */signed char) (((((~(-1276172445))) - (((int) arr_41 [i_12] [i_12])))) * (((/* implicit */int) max((arr_37 [i_11 + 2]), (arr_37 [i_11 - 4])))))));
                /* LoopNest 2 */
                for (long long int i_13 = 2; i_13 < 17; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            arr_47 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) min((arr_42 [i_12]), (((/* implicit */int) arr_44 [i_11] [i_12 + 1] [i_13] [i_12]))))) : (max((((/* implicit */unsigned int) var_10)), (2321034619U)))))) ? (arr_41 [i_12] [(short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_44 [i_11] [i_13] [i_13 + 2] [i_12]))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_13] [i_13 + 2] [i_12] [i_13]))))) ? (max((((/* implicit */unsigned int) arr_43 [i_14] [i_13] [i_13] [2LL])), (arr_46 [i_11]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (16777215U)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    for (unsigned short i_16 = 2; i_16 < 17; i_16 += 2) 
                    {
                        {
                            arr_54 [i_16] [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_49 [i_12] [i_16 - 1] [i_12 - 1])))));
                            var_29 &= ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
}
