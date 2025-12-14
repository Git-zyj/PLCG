/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239440
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
    var_12 = max((((((/* implicit */_Bool) var_1)) ? (((var_8) + (((/* implicit */int) var_2)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) (short)-27893))))) : (var_10))));
    var_13 *= ((/* implicit */unsigned short) ((unsigned char) min((((((/* implicit */_Bool) 8340464221922766047ULL)) ? (-496222839) : (((/* implicit */int) (unsigned char)30)))), ((-(((/* implicit */int) var_6)))))));
    var_14 = ((/* implicit */long long int) max((var_3), (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) var_4);
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2265355033U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)13097)))) + (((/* implicit */int) (unsigned short)26216))))) ? (min(((+(((/* implicit */int) arr_0 [i_0 - 2])))), (((/* implicit */int) max(((unsigned char)226), (arr_0 [i_0])))))) : (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */int) arr_0 [i_0 + 2])))))))));
        arr_2 [i_0] [13U] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) ((13193653318477301626ULL) << (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [(short)10])), (arr_0 [i_0 - 2])))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_17 += ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [9ULL]))) : (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (var_10))))))));
    }
    for (int i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)5))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) / (var_10)))) > (arr_4 [i_1 - 4] [i_1 - 1])))) : ((-(((/* implicit */int) max((var_2), (((/* implicit */short) var_6)))))))));
        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) + (((/* implicit */int) (short)20789)))))))));
        arr_5 [i_1 - 4] = ((/* implicit */unsigned long long int) var_1);
        var_20 = ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)1409)) ^ (var_10)))))) : (((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_1 + 2])) ? (arr_4 [i_1 + 1] [i_1 - 4]) : (arr_4 [i_1 + 2] [i_1 - 3])))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_9))))) ? ((-(-8794464367341192052LL))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (624289234501284999LL)))))) ? (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (unsigned char)34)), (var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */unsigned long long int) arr_3 [i_1 + 2])) : (8340464221922766052ULL)))) ? (((((/* implicit */_Bool) 12185012944183559254ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (1985483612185674776ULL))) : (((/* implicit */unsigned long long int) arr_4 [i_1 - 4] [i_1 - 1]))))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_6))));
}
