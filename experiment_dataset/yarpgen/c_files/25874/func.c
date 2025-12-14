/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25874
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
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (5362995503256861897ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_11))))))));
    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_9))))))))) * (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 2147483635)), (arr_0 [i_0 + 3]))) ^ (((((/* implicit */unsigned long long int) var_8)) / (arr_0 [i_0 + 2])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_1 - 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) arr_5 [i_1 - 3] [i_0])) : (((arr_1 [12]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)45)) > (((/* implicit */int) (signed char)-27))))))))));
            arr_7 [i_1] [(unsigned char)0] [i_0] = max((var_1), (arr_4 [i_0] [i_1]));
            arr_8 [i_0] = ((/* implicit */short) arr_2 [i_0 + 1]);
            var_19 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_4 [i_0] [i_1 + 3]) & (((/* implicit */int) (unsigned short)14955))))))) + (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)0]))) != (8833938305789502012ULL)))))))));
            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) (+(arr_5 [i_0 + 3] [i_0 + 3])))) : ((-(var_3)))))), (3933787042535532281ULL)));
        }
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            arr_12 [i_0] [i_2] [i_2] = var_13;
            arr_13 [(_Bool)1] = ((/* implicit */int) ((_Bool) (signed char)-45));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_18 [(unsigned char)3] [(unsigned char)3] [i_3] = ((/* implicit */unsigned long long int) arr_17 [i_2 + 1] [10] [i_2 - 1] [(_Bool)1]);
                        arr_19 [i_0] [i_0] [(signed char)4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_2] [i_0])) || (((/* implicit */_Bool) var_8))));
                        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [6])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)22)))) : (((((/* implicit */_Bool) (unsigned char)130)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10))))));
                    }
                } 
            } 
        }
    }
}
