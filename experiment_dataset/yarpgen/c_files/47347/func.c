/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47347
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
    var_10 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) var_9)) != (max((((/* implicit */long long int) (short)3834)), (var_1))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(arr_7 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) 9006649498927104LL);
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((short) 7805070074332453275LL)))));
                    }
                    for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        var_14 ^= ((/* implicit */long long int) ((signed char) max((arr_5 [i_4 - 1] [i_4] [i_4 + 1]), (((/* implicit */unsigned char) arr_3 [i_4 + 1])))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_10 [i_2]))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_16 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned char) ((long long int) (!(((/* implicit */_Bool) var_9))))));
                        arr_17 [i_5] [i_2] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)49))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((13475641112210508174ULL), (arr_4 [i_0])))))))) : (((((/* implicit */_Bool) (unsigned short)8967)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) 7805070074332453273LL)))) : (((((/* implicit */unsigned long long int) var_3)) ^ (15802314538066237383ULL)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_2] [i_1] [i_2] [i_6 - 1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_6 - 1] [i_1]))));
                        var_16 = (!(((/* implicit */_Bool) (short)-13118)));
                    }
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (16754317050229814301ULL) : (((/* implicit */unsigned long long int) -179046266)))) : (((/* implicit */unsigned long long int) -5269465363581617498LL))));
    var_19 ^= ((/* implicit */long long int) (+(var_0)));
}
