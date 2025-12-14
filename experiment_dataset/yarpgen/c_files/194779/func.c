/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194779
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
    var_18 = ((/* implicit */unsigned char) ((15261393228718843131ULL) != (3185350844990708485ULL)));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) var_14)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) <= (arr_2 [i_0])))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_0] [i_0]))))), (((unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1]))));
        arr_3 [i_0] = ((unsigned long long int) ((unsigned long long int) 13642613218208826808ULL));
        var_21 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_22 = ((/* implicit */_Bool) (((_Bool)1) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)(-127 - 1)))));
            arr_10 [i_1] [i_1] [(unsigned char)4] |= ((/* implicit */unsigned char) arr_4 [i_2]);
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((6ULL) & (3955618731906373356ULL)));
            arr_14 [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) != (((/* implicit */int) var_17))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [(signed char)21] [i_4] [i_4])) ? (((/* implicit */int) ((unsigned char) (signed char)(-127 - 1)))) : ((~(((/* implicit */int) arr_15 [i_1] [i_4] [i_1]))))));
                var_23 = ((((((/* implicit */int) (signed char)90)) % (((/* implicit */int) (unsigned char)3)))) != (((((/* implicit */int) arr_11 [i_1])) << (((arr_7 [i_1]) - (3201293704458634719ULL))))));
            }
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-((-(14491125341803178259ULL))))))));
        }
        var_25 = arr_15 [i_1] [i_1] [i_1];
        arr_18 [i_1] = max((var_8), (var_14));
    }
    var_26 |= ((var_10) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
    var_27 &= ((unsigned long long int) (_Bool)1);
}
