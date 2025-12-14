/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40049
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) var_9);
                                var_16 = ((/* implicit */short) (+((-(arr_11 [i_1])))));
                                arr_13 [i_0] [i_0] [i_1] [5ULL] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32756))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_21 [i_1] [(short)14] [(short)14] [(short)14] [i_1] = ((/* implicit */short) arr_14 [i_0] [i_5 + 2] [i_5 + 1] [i_5]);
                                var_17 = ((/* implicit */_Bool) arr_2 [i_2] [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_5 [i_0] [i_1 + 1]))))));
                                arr_29 [i_0] [i_1] [i_7] [4ULL] [i_8] |= ((/* implicit */unsigned long long int) ((_Bool) (short)32741));
                                var_18 = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */short) ((((unsigned long long int) (~(603431650395032364LL)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32753), (((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [(unsigned char)19] [(unsigned char)19])))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */_Bool) var_0);
                                arr_35 [i_1] [i_1] [i_1] [(short)0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_14;
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        for (short i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            {
                arr_40 [i_11] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11] [i_11] [i_12])) ? (arr_36 [i_11] [i_11]) : (arr_38 [i_11] [i_12] [i_12])))) ? (((/* implicit */int) ((min((arr_38 [i_11] [i_12] [i_12]), (((/* implicit */unsigned long long int) var_10)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6))))))) : (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */short) var_0);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32753))))))))))));
                            arr_45 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((signed char) arr_39 [i_11]))), (arr_36 [i_14] [i_11]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_38 [i_11] [(unsigned char)20] [i_12])))) ? (arr_38 [i_11] [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-127), (((/* implicit */signed char) (_Bool)1))))))))));
                            var_25 *= ((/* implicit */short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-29544))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))) : (arr_38 [5ULL] [i_13] [i_14])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
