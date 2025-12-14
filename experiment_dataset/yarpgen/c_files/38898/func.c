/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38898
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (var_3) : (((((/* implicit */_Bool) 3240575299688276460ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(var_9)))), (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */long long int) 3626238710U)) : (-4272111715968675159LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((var_11) - (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min(((signed char)-2), ((signed char)-120))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))));
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((signed char)15), (arr_1 [i_0 - 2]))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-115)), (arr_0 [i_0])))) ? (((/* implicit */int) min((var_15), (arr_1 [i_0])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((0U) << (((arr_0 [i_0]) - (8695846166587539196LL)))))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((unsigned short) var_7));
        arr_9 [i_1] = ((/* implicit */int) 4254855592690720638ULL);
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_15))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1]))));
            var_22 = ((/* implicit */unsigned int) ((-2147483638) >= (((/* implicit */int) arr_12 [i_2 - 1]))));
        }
    }
    var_23 = ((/* implicit */unsigned char) ((min((max((var_4), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_9)))))) < (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_5)))))))));
}
