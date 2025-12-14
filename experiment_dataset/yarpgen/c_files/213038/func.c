/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213038
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
    var_19 = var_5;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) (signed char)119)), (arr_0 [i_0] [i_0])))) % (((((/* implicit */int) (signed char)-32)) % (((/* implicit */int) (unsigned char)255)))))))));
        var_21 = ((/* implicit */signed char) ((((arr_2 [i_0] [i_0]) + (2147483647))) >> ((((+(3756120005U))) / (max((3180249688U), (((/* implicit */unsigned int) (unsigned char)255))))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(arr_6 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : ((+(1701069330U)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_16 [i_4] [i_1] [7LL] [i_1] [i_0] = ((/* implicit */signed char) max((((int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((16403807162777281356ULL) <= (((/* implicit */unsigned long long int) 2474082727U)))))) != (((((/* implicit */_Bool) 3756120005U)) ? (538847286U) : (3876891498U))))))));
                            arr_17 [i_1] = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */short) var_8)), (arr_13 [i_0] [i_0] [0] [i_0] [i_0]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((var_16) ? (((/* implicit */unsigned long long int) (-(arr_18 [i_0])))) : (arr_1 [i_0])))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))) ^ (var_17))) - (11727973301358008003ULL))))) : (((/* implicit */int) (unsigned char)7))))));
            arr_20 [i_0] [i_0] [i_0] = ((_Bool) max((((/* implicit */unsigned long long int) var_6)), (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            arr_21 [i_0] = ((/* implicit */int) (+(var_17)));
        }
    }
    for (short i_6 = 3; i_6 < 9; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_9 [i_6 + 1] [i_6] [i_6] [i_6 - 3]))) ? (((((/* implicit */int) arr_19 [i_6 + 1] [i_6 - 2])) * (((/* implicit */int) arr_8 [i_6] [i_6] [10ULL])))) : (((/* implicit */int) ((_Bool) arr_19 [i_6 + 1] [i_6])))));
        var_24 = (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_6] [i_6])), (1042162425U)))) ? (((((/* implicit */int) (signed char)-125)) - (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6])))))));
    }
    var_25 -= ((/* implicit */_Bool) (-(var_17)));
    var_26 *= ((/* implicit */unsigned int) ((int) (unsigned short)32822));
}
