/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233070
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)8069))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)255)), (((((/* implicit */long long int) ((/* implicit */int) (short)-256))) - (var_9)))));
                        var_18 = ((/* implicit */long long int) max((var_18), ((~(min((((/* implicit */long long int) ((short) var_3))), (((((/* implicit */_Bool) (short)26050)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)18))) : (var_9)))))))));
                        arr_10 [14] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)512))) && (((/* implicit */_Bool) ((short) ((-9166017463396566997LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)118)))))))));
                        var_19 = ((/* implicit */_Bool) (+(var_3)));
                    }
                    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        var_20 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) var_3))))))))), (((unsigned long long int) var_7))));
                        var_21 += ((/* implicit */_Bool) (-((~((~(((/* implicit */int) var_10))))))));
                    }
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), ((-(((((/* implicit */_Bool) 354644408)) ? (var_9) : (var_3)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((long long int) (~(((/* implicit */int) var_0))))) | (((/* implicit */long long int) ((/* implicit */int) ((short) max((279784463U), (((/* implicit */unsigned int) var_12))))))))))));
                        arr_18 [i_5] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) min((281474976710656LL), (((/* implicit */long long int) 2275578165U))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                        var_24 -= ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-14117)))), ((~(((/* implicit */int) (unsigned short)24446))))));
                        arr_19 [i_5] [i_5] = ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)14116))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27414))))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (281474976710656LL)))));
                        var_25 += ((/* implicit */short) ((long long int) ((short) (-(var_7)))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((8886978403097619507LL), (((/* implicit */long long int) (unsigned short)21355))))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)6774)) : (((/* implicit */int) (short)0))))) : (min((((/* implicit */long long int) (short)0)), (var_3))))) : (((/* implicit */long long int) ((unsigned int) (short)18939))))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_7))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((long long int) max((var_9), (var_9)))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58677))))))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((int) (~((~(var_7)))))))));
}
