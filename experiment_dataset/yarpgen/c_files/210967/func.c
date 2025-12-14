/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210967
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)0)), (16551159878727215873ULL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) max((9223372036854775807LL), (((long long int) 1895584194982335745ULL))));
            /* LoopSeq 3 */
            for (long long int i_2 = 2; i_2 < 23; i_2 += 3) /* same iter space */
            {
                arr_12 [i_2] = ((/* implicit */short) 1895584194982335765ULL);
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
            }
            for (long long int i_3 = 2; i_3 < 23; i_3 += 3) /* same iter space */
            {
                arr_15 [i_0] [i_1] [9LL] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (-1LL)));
                arr_16 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min(((~(122880))), (((/* implicit */int) ((min((var_0), (((/* implicit */unsigned int) var_3)))) == (min((var_0), (var_0))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(var_0))) + (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)115)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)5] [i_0] [i_0]))) <= (16551159878727215883ULL))))))) : (((((/* implicit */_Bool) min(((short)-13189), (((/* implicit */short) var_4))))) ? (min((((/* implicit */unsigned int) var_2)), (474032560U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 10990671894282235054ULL))))))));
            }
            for (long long int i_4 = 2; i_4 < 23; i_4 += 3) /* same iter space */
            {
                var_15 = ((/* implicit */long long int) (unsigned char)166);
                arr_19 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_4 + 1])) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (17U))))))), ((unsigned short)30898)));
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((max((var_0), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-63)) + (((/* implicit */int) var_3)))))))) ^ (((16551159878727215873ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_11 [i_4] [(unsigned char)21] [i_4 + 1]), (arr_11 [i_0] [i_0] [i_4 - 2])))) ? (((long long int) (short)-13158)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
            }
            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) var_9))), (min((var_9), (((/* implicit */unsigned char) var_7)))))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */signed char) min(((_Bool)1), (var_11)))), (var_10)))) & (min((((/* implicit */int) var_4)), (max((-122882), (((/* implicit */int) (unsigned char)255))))))));
            arr_20 [i_1] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_9)))));
        }
        arr_21 [i_0] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) var_0))));
    var_21 = ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned long long int) var_8)) ^ (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1))))))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) 1LL))))))))));
}
