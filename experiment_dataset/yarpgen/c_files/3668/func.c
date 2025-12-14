/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3668
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
    var_11 &= ((unsigned short) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_3 [(unsigned short)24] = ((/* implicit */unsigned char) (signed char)10);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            var_12 |= ((/* implicit */unsigned char) arr_1 [i_0]);
            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)20))));
            var_14 = ((/* implicit */signed char) 609306545);
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_1 [(short)7]))));
        }
        for (long long int i_2 = 3; i_2 < 24; i_2 += 1) 
        {
            arr_8 [i_0] [4LL] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (unsigned char)139)))))))));
            var_16 ^= ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_0]);
        }
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((arr_4 [(short)24] [i_0] [i_0]) < (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) > (((/* implicit */int) (signed char)117))));
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            arr_13 [5] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned char) ((long long int) var_10)))), (max((((/* implicit */unsigned long long int) ((int) var_2))), (((((/* implicit */_Bool) -1440906202413474179LL)) ? (15049557043700997852ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177)))))))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_9)))))));
            var_19 = ((/* implicit */short) min((var_19), ((short)-1)));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_6))));
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned short) max(((+(1260444606))), (((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */unsigned char) min((9151314442816847872ULL), (((/* implicit */unsigned long long int) (signed char)-2))));
        }
        arr_17 [i_3] [i_3] = ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2147483647)), (-4829821705060492012LL)))) < (max((((/* implicit */unsigned long long int) arr_9 [i_3] [i_3])), (var_8))));
    }
    var_22 += ((/* implicit */unsigned long long int) var_7);
}
