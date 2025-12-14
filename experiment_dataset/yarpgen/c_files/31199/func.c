/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31199
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
    var_20 = ((/* implicit */unsigned long long int) min(((-((+(((/* implicit */int) var_15)))))), (min((((/* implicit */int) max(((short)32767), (var_6)))), ((+(((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) (+(max(((+(var_12))), (((/* implicit */int) ((short) 7841850345673695076LL)))))));
                arr_9 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])), (var_7)))))), ((+(min((var_16), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min(((+((-(((/* implicit */int) arr_7 [i_1])))))), (max((((/* implicit */int) min((((/* implicit */short) (unsigned char)49)), (var_3)))), ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))))));
                    arr_12 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (+(((unsigned long long int) var_8)))));
                    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_7 [i_0])), (var_7)))))));
                    arr_13 [i_0] [4LL] [i_2] |= ((/* implicit */short) (-((-(((unsigned int) var_8))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (long long int i_5 = 2; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_4 [i_0] [6] [i_4]))))))), ((-((-(var_1)))))));
                                var_24 = ((_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)26724)))));
                                arr_24 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) min(((-((+(((/* implicit */int) var_6)))))), (((int) min((var_12), (((/* implicit */int) (unsigned short)38811)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_6 = 4; i_6 < 8; i_6 += 3) 
                    {
                        arr_28 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (+((-(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-((-(((/* implicit */int) var_19))))))), ((+(min((var_9), (((/* implicit */unsigned int) arr_11 [i_0] [i_7]))))))));
                            arr_33 [i_7] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) (+(min(((-(((/* implicit */int) (short)-28428)))), ((-(((/* implicit */int) arr_23 [i_0] [i_1] [i_7] [(unsigned char)4] [i_7]))))))));
                            var_26 = ((/* implicit */unsigned short) (-((+((+(((/* implicit */int) (signed char)60))))))));
                        }
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(min((((/* implicit */int) (unsigned short)26708)), (-2010799586)))))), (min((max((7642272681259212077LL), (((/* implicit */long long int) arr_0 [i_6])))), (((/* implicit */long long int) max((var_12), (((/* implicit */int) (signed char)(-127 - 1))))))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        arr_37 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */int) (-((+(max((arr_36 [i_8 + 3] [i_8 + 3] [i_3] [i_0]), (((/* implicit */long long int) 2675082484U))))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned long long int) (-((+(((/* implicit */int) (unsigned short)0))))))))));
                    }
                    /* vectorizable */
                    for (short i_9 = 4; i_9 < 10; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) ((unsigned short) (+(arr_16 [i_0] [i_9]))));
                        arr_41 [i_0] [i_1] [i_3] [i_9] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) arr_5 [i_0] [i_0] [i_3])));
                        arr_42 [(unsigned short)6] [i_1] [i_3] [i_9] &= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_15 [(_Bool)1]))))));
                    }
                }
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) ((unsigned short) (+((+(((/* implicit */int) (unsigned short)38828)))))));
}
