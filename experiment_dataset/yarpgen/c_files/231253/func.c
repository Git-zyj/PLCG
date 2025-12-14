/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231253
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
    var_20 = max((((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned short) var_4)), (var_16))))), (((((/* implicit */_Bool) (~(var_17)))) ? ((+(5133508909733377564LL))) : (((/* implicit */long long int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_15)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] [9U] [9U] [i_2] = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2] [8LL])))) ? (((/* implicit */int) arr_5 [i_2] [i_1])) : (((/* implicit */int) arr_2 [i_3]))))));
                            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) ((short) (unsigned short)7255))))));
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (!(arr_6 [(unsigned short)6] [i_3] [(unsigned short)6] [i_3]))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_7 [i_1] [(_Bool)1]))))) ? ((-(((/* implicit */int) arr_5 [i_1] [i_0])))) : (((/* implicit */int) arr_2 [i_1]))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned short)18))) ? (((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) : ((-(((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned char) (-((-(arr_15 [i_0] [i_0] [i_4] [i_5] [i_5] [i_0])))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17066494862299115703ULL))))));
                            arr_17 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~((-(((/* implicit */int) arr_7 [i_5] [i_5])))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : ((~(((/* implicit */int) arr_1 [i_0] [i_4]))))))));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (576460752303423488LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? ((-((~(((/* implicit */int) arr_12 [i_0] [i_0])))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)252))))));
                var_26 = arr_4 [i_0];
            }
        } 
    } 
}
