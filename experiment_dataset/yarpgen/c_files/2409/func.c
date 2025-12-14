/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2409
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((+(var_6))) : (((/* implicit */long long int) ((/* implicit */int) (((~(282332135))) >= (((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) (-(1833236718)));
        var_14 *= ((/* implicit */unsigned char) var_0);
        var_15 = ((/* implicit */unsigned int) (-(((unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_10 [21U] = ((/* implicit */unsigned int) ((297061035574693932LL) == (-1LL)));
            var_16 += ((/* implicit */signed char) (-(4294967295U)));
            var_17 = var_10;
            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */int) -6443428452207016163LL);
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            arr_14 [i_1] = ((/* implicit */signed char) (+((((-(0ULL))) / (((/* implicit */unsigned long long int) 562949953421311LL))))));
            arr_15 [i_3] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61530)) << (((4058308038U) - (4058308030U)))))) ? ((-(((/* implicit */int) (signed char)24)))) : (((((/* implicit */_Bool) 6710621930086207008LL)) ? (((/* implicit */int) var_11)) : (var_9))))))));
            var_18 = ((/* implicit */unsigned char) -74037510);
        }
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_2 [i_4 + 1]))))));
                    arr_21 [i_1] [i_4] [(unsigned short)13] [i_5] = ((/* implicit */long long int) (-((-((+(((/* implicit */int) (short)-1699))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)138)) ? (var_9) : (((((/* implicit */_Bool) arr_12 [i_1] [i_4 - 1] [i_1])) ? (((/* implicit */int) (short)1231)) : (((/* implicit */int) (_Bool)0)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                                arr_26 [i_1] [i_4] = ((/* implicit */unsigned int) (short)-12455);
                                var_21 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(18446744073709551607ULL))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
    }
    var_23 = ((/* implicit */int) var_4);
}
