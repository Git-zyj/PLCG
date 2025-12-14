/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235187
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
    var_18 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_1)))))))));
    var_19 = ((/* implicit */unsigned char) var_15);
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (min(((~(((/* implicit */int) (short)-17191)))), (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (-906238435)));
                        var_22 ^= ((/* implicit */int) ((((arr_4 [i_1] [i_1]) >> (((((/* implicit */int) var_10)) - (129))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */int) var_7)))))));
                    }
                    arr_12 [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) 906238437)))))));
                    arr_13 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) -906238445);
                }
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_17 [i_0] [i_1] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))), ((unsigned char)142)));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_5] [i_5] [i_5] [i_5] = ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) : (728744192861247469ULL))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) var_10))))) < (min((((/* implicit */unsigned long long int) var_3)), (var_1)))))));
                        arr_22 [i_0] [i_5] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (unsigned char)141)))));
                        var_23 = ((/* implicit */int) arr_4 [i_0] [i_1]);
                    }
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49084))) != (-283318652109126500LL))))));
                    var_25 = ((/* implicit */unsigned char) (_Bool)1);
                    var_26 = ((/* implicit */unsigned char) ((short) var_2));
                }
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    arr_25 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)141))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_23 [i_6] [i_1] [i_6] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1779009698U)))))));
                }
                for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) (+((+(2147483646)))));
                        arr_30 [i_0] [i_0] [i_1] [i_7] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (short)8897))))))));
                        var_29 = ((/* implicit */short) var_3);
                    }
                    var_30 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)10912)))) == ((-(((/* implicit */int) min((var_9), (((/* implicit */short) var_10)))))))));
                }
            }
        } 
    } 
}
