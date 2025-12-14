/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234363
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
    var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) var_5)), (((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((3335490482U) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (12439516018696865541ULL)))) ? (((((/* implicit */_Bool) 4557774145712092365LL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_2 [i_0]))));
        arr_3 [(signed char)11] [i_0] = ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0]))) : (arr_1 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
                        {
                            var_13 *= ((/* implicit */unsigned char) ((((unsigned long long int) (_Bool)1)) < (9266173957215283017ULL)));
                            var_14 -= ((/* implicit */unsigned long long int) arr_15 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [(signed char)9]);
                            arr_18 [i_3] [i_2] [i_3] [i_2] [i_1] |= -4557774145712092365LL;
                        }
                        var_15 = ((/* implicit */unsigned int) 6760027018682609452LL);
                        arr_19 [i_1] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) arr_5 [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (arr_1 [i_3]))) : (arr_17 [i_1] [i_1] [i_3] [i_4] [i_4 + 3] [i_4] [i_1]));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_6 = 4; i_6 < 13; i_6 += 4) 
        {
            var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)59)) || (((/* implicit */_Bool) arr_5 [i_1]))));
            arr_22 [i_1] [i_1] = ((/* implicit */unsigned int) (~(arr_10 [i_1] [i_1] [i_6])));
        }
    }
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 881341443U)))))))) ? (((/* implicit */int) ((_Bool) ((var_9) & (((/* implicit */int) (unsigned char)255)))))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)2)))), (((/* implicit */int) var_3))))));
}
