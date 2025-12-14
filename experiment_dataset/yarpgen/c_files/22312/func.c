/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22312
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned long long int) var_1)) - ((+(18446744073709551605ULL)))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) || ((!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        var_17 |= ((/* implicit */int) max((((unsigned long long int) max((-1674170825), (((/* implicit */int) (short)-12388))))), (((/* implicit */unsigned long long int) var_3))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0])))) : (min((1674170850), (((/* implicit */int) (short)6440))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_7))));
            var_19 |= (-(((/* implicit */int) ((short) arr_3 [i_2 - 3]))));
            arr_10 [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) max((arr_3 [i_2]), (((/* implicit */short) arr_8 [i_1] [i_1] [i_2]))))) ? (max((-1674170832), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min(((short)19932), (((/* implicit */short) arr_5 [i_1]))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 4; i_3 < 22; i_3 += 1) 
        {
            var_20 |= ((/* implicit */signed char) (+((+(((/* implicit */int) arr_8 [i_1] [i_3] [(signed char)20]))))));
            arr_14 [i_1] [i_3] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 - 4]))));
        }
        var_21 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_9 [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_11 [8LL] [i_1])) : (((/* implicit */int) (unsigned char)123))))))))));
        var_22 -= ((/* implicit */unsigned short) (short)12288);
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_23 |= ((/* implicit */unsigned char) ((_Bool) arr_13 [i_4] [i_4]));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)246))));
            arr_20 [i_5] = ((/* implicit */signed char) (short)-19946);
        }
        var_24 += ((/* implicit */unsigned long long int) arr_11 [i_4] [i_4]);
        var_25 ^= ((/* implicit */_Bool) (signed char)109);
    }
    var_26 = ((/* implicit */short) -6755349451781958698LL);
}
