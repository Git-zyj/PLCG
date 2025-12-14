/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28324
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)6005)) ? (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31892))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (signed char)112)), (var_5))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511)))))) ? (((/* implicit */unsigned long long int) 3761584542U)) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))), (min((var_6), (((/* implicit */unsigned long long int) var_5))))))));
        arr_4 [i_0] = (~(((/* implicit */int) (signed char)103)));
    }
    for (int i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)32767))));
        var_13 = ((/* implicit */unsigned short) (signed char)-103);
    }
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            var_14 = ((/* implicit */signed char) var_6);
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                var_15 = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) var_4))))))));
                var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned short)50151)) & (((/* implicit */int) arr_8 [i_2 + 1]))))));
                var_17 = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1]))) : (0LL))), (((/* implicit */long long int) arr_11 [i_4 - 1] [i_4] [i_4]))))));
                arr_15 [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) var_5);
            }
            arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(var_1)));
        }
        for (int i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) min(((-(((((/* implicit */int) var_4)) * (((/* implicit */int) var_8)))))), (max((((/* implicit */int) arr_6 [i_2 - 1] [i_5 + 1])), (((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned short)59537))))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned short)3968)))), (((/* implicit */int) (unsigned short)5979))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(var_1)))));
            arr_19 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)0))))) && ((!(((/* implicit */_Bool) (signed char)-92))))));
        }
        arr_20 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)91))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_5 [i_2])))))) : (arr_18 [i_2])));
        var_20 = ((/* implicit */unsigned short) var_0);
        arr_21 [i_2] = ((/* implicit */signed char) var_8);
    }
    for (short i_6 = 2; i_6 < 14; i_6 += 2) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned short)47727))))));
        arr_26 [i_6] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((var_4) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6] [i_6])))))) ? (min((var_10), (((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_11 [(unsigned short)13] [10] [i_6 - 2])) & (((/* implicit */int) var_9))))))));
    }
    var_21 = ((/* implicit */unsigned char) -3672638125451106340LL);
}
