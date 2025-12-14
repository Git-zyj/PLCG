/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203681
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (0ULL)))) ? (((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12023))))) : (var_3))) >= (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_8))))), (var_11))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_18 += ((/* implicit */unsigned int) max((((((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (short)14039)))) ? (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3])))) : (((/* implicit */int) var_7)))), (((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_9 [i_3] [i_2 + 1] [3ULL] [i_0])))) & (((/* implicit */int) arr_0 [i_2 + 3]))))));
                        arr_10 [i_3] [i_2 - 1] [i_0] [i_0] = ((/* implicit */_Bool) -463637601);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) var_8);
                            arr_13 [i_0] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_12 [10LL] [i_4 - 2] [i_2 + 1] [i_4])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_9 [i_4] [i_2] [i_1] [i_0])))) : (((/* implicit */int) (unsigned short)0)))) ^ ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 17948467273141644431ULL)))))))));
                            var_20 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_0 [i_2 - 2])))), (((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_0 [i_2]))))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((var_1), (((/* implicit */long long int) (unsigned short)30737)))) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((((((/* implicit */int) var_16)) >= (((/* implicit */int) (unsigned short)53513)))) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)14039)) : (((/* implicit */int) (signed char)-17))))))))))));
        arr_14 [i_0] [i_0] = min((((/* implicit */long long int) (((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((6368521475557699496ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [i_0]))))) - (6368521475557699534ULL)))))), (max(((-(72057594036879360LL))), (((/* implicit */long long int) var_12)))));
    }
}
