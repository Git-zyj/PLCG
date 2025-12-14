/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38973
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
    var_15 ^= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+((~(((/* implicit */int) (short)-32766)))))))));
            var_17 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)63))))) + (((unsigned int) (short)-21958))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) 494369983937701470ULL))));
                arr_6 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) arr_0 [i_0]));
                var_19 = ((/* implicit */_Bool) var_9);
            }
        }
        var_20 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (short)29543))), (((((/* implicit */_Bool) (short)21938)) ? (((/* implicit */int) ((unsigned char) var_4))) : (max((arr_2 [i_0] [4] [9ULL]), (arr_0 [i_0])))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(unsigned char)1] [i_0] [i_0])) ? (max((arr_2 [i_0] [i_0] [i_0]), (arr_0 [i_0]))) : ((+(((/* implicit */int) var_12)))))))));
        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) ((max((arr_2 [i_0] [i_0] [(signed char)9]), (((/* implicit */int) var_10)))) == (((/* implicit */int) (short)32767)))))));
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        arr_10 [(signed char)8] [i_3] = ((/* implicit */_Bool) ((int) ((signed char) (short)22419)));
        arr_11 [i_3] &= ((/* implicit */unsigned int) arr_8 [11]);
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) (signed char)-25);
        var_24 = ((/* implicit */signed char) var_13);
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((signed char) var_14));
        var_25 = ((/* implicit */unsigned short) (+(494369983937701468ULL)));
    }
    var_26 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_8)), (arr_8 [(unsigned short)0])));
        var_27 *= ((/* implicit */unsigned char) ((var_14) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) ((((/* implicit */int) min((arr_7 [i_5]), (((/* implicit */unsigned char) (signed char)-20))))) >= ((-(575059363))))))));
        arr_18 [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
    }
}
