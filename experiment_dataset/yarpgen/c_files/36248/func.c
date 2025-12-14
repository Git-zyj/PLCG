/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36248
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((unsigned int) var_15)))))))));
    var_17 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        var_18 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0U)))) ? (((long long int) arr_0 [i_0 + 4])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0 + 4])) : (var_8))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) -21)), (-1LL)))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (var_9) : (((/* implicit */unsigned long long int) 0LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-24781)) > (arr_0 [i_0]))))) : (((long long int) (signed char)-16)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] [(short)3] [i_2 - 1] [8U] [i_1 - 2] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1911892936)) ? (((/* implicit */long long int) -114225556)) : (arr_8 [i_3] [i_1] [i_1] [i_0 + 1])))))) ? (((/* implicit */long long int) max((var_5), (((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_3]))) >= (var_9))))) ^ (((((/* implicit */_Bool) 5670205959455067042ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_12)))))));
                        arr_11 [(unsigned short)8] [i_1] [i_2 - 2] [i_3] = ((/* implicit */unsigned long long int) min((((9LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_9 [i_1] [i_3])))) ? (((/* implicit */int) ((signed char) 1456025839807001587ULL))) : ((~(arr_0 [i_1]))))))));
                        arr_12 [i_1] [i_1] [(unsigned short)6] = ((/* implicit */unsigned short) ((int) ((unsigned int) arr_6 [i_1] [i_1])));
                        var_19 = ((/* implicit */short) min((((/* implicit */unsigned char) ((signed char) arr_8 [i_0 + 1] [i_1] [i_1 - 1] [i_2 - 2]))), (max((arr_3 [i_1]), (arr_3 [i_1])))));
                        var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2531282798U)) ? (((/* implicit */int) arr_5 [i_3] [i_2 - 1] [i_3])) : (((/* implicit */int) arr_1 [i_1 - 1])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_3] [(unsigned short)0] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [6])) : (((/* implicit */int) arr_6 [i_3] [i_3]))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_5) > (((/* implicit */int) arr_4 [4U] [(signed char)4])))))))) : (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3]))) - (2582000934U))) : (((/* implicit */unsigned int) ((int) var_5)))))));
                    }
                } 
            } 
        } 
        arr_13 [2LL] [2LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) 18446744073709551615ULL))), (arr_8 [i_0] [6U] [6U] [i_0])))) ? (((/* implicit */int) (!(arr_4 [i_0] [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [8])))))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)200)) ? (var_5) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)17881)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (unsigned char)138)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))))) : ((~(((((/* implicit */_Bool) -384558860)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9)))))));
}
