/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215135
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 144115188075855864LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : ((+(var_14)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) var_3))))));
                    arr_10 [(unsigned short)12] |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)(-32767 - 1))), (-1268760661724092225LL)))))))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 497892001)))) >= (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_9)), (var_16))) ^ (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))))) <= (18066647837012237758ULL))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((unsigned long long int) 15838911409899390359ULL)))));
                                var_22 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-3571875952113362757LL)))) ? (((2607832663810161256ULL) >> (((/* implicit */int) var_9)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)23747)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        var_23 = ((/* implicit */_Bool) (((-(19ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
        arr_17 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) (_Bool)1))))))));
        var_24 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) (short)-3674)))));
    }
    var_25 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 35888059530608640ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))))));
}
