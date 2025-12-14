/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194299
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
    var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) var_4))) ? (max((0LL), (((/* implicit */long long int) (short)-1)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)0)))))) >= (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_2) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_3)))))) > (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (arr_1 [i_0]))) ? (((5ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_0]))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)25)))));
    }
    var_13 = ((/* implicit */signed char) (((~(min((((/* implicit */unsigned long long int) var_5)), (var_3))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) (short)10)) * (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)109))))) : (((511ULL) % (18446744073709551105ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((int) arr_3 [i_2])) : (((((/* implicit */_Bool) 530ULL)) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (var_5)))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (var_0)))) ? (((530ULL) * (((/* implicit */unsigned long long int) arr_5 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_4)))))));
            arr_9 [i_1] [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) -444838463)) ? (933246022U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))))));
        }
        arr_10 [i_1] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) (unsigned char)255)))));
        arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26))) >= (506ULL)));
    }
    var_15 = ((/* implicit */signed char) ((((((18446744073709551085ULL) >= (515ULL))) ? ((~(3556267654667284663ULL))) : (((((/* implicit */_Bool) -1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))))))) << (min((max((var_1), (((/* implicit */long long int) 8388544U)))), (((/* implicit */long long int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))))))));
}
