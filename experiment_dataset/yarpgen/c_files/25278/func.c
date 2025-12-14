/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25278
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(((((/* implicit */_Bool) -2914425165472288149LL)) ? (-8699480366396291143LL) : (((/* implicit */long long int) 1773108428)))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_10 [(signed char)2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30433))) / (var_3))) % (max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)50521)), (2190977305U)))), (-5772580032319785313LL)))));
                        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [4] [i_1] [i_2] [i_3] [i_0]))))) ? (((/* implicit */int) (unsigned char)69)) : (-1750682262)))) ? (((min((-1773108429), (50717188))) & (((/* implicit */int) var_14)))) : (-1773108421)));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)24681);
                        var_20 = (-(((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_2 + 1] [i_2] [i_2 - 2] [i_2])), (arr_6 [i_1] [13LL] [i_1] [i_2 - 2])))));
                        arr_13 [i_0] [i_1] [i_2 - 3] [i_0] = 901705763;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                {
                    arr_20 [i_0] [i_4] [i_0] [i_4] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_4 [i_5 - 1] [i_5] [i_5 - 1])))), (((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_4 [i_5 - 1] [i_5] [i_5 - 1]))))));
                    arr_21 [i_0] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((-1755685515) ^ (((/* implicit */int) (unsigned char)67))))) ^ (2103989963U))), (min((((/* implicit */unsigned int) var_12)), (arr_19 [i_0])))));
                }
            } 
        } 
    }
    var_21 = var_10;
}
