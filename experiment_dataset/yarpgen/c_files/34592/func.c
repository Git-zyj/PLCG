/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34592
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
    var_17 = ((/* implicit */unsigned long long int) var_6);
    var_18 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))) == (var_8))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((short) (-(((int) 7568179819873165568LL)))));
        arr_2 [i_0] = ((/* implicit */short) (+((((!(((/* implicit */_Bool) var_2)))) ? ((-(((/* implicit */int) var_14)))) : (((1497988744) & (-1347377831)))))));
        var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_8 [10U] [i_2] [i_2] = ((/* implicit */short) ((((3806743381360352671ULL) | (((/* implicit */unsigned long long int) var_3)))) >> (((var_13) + (1790604485)))));
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */short) ((var_12) < (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((3806743381360352685ULL) - (3806743381360352677ULL))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                arr_13 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)189))));
                var_21 |= ((/* implicit */short) ((((unsigned long long int) var_7)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65533)) && (((/* implicit */_Bool) (unsigned char)189))))))));
                arr_14 [i_1] [6U] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) | (var_10)));
                var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                arr_15 [i_1] [(short)3] [i_3] = ((/* implicit */unsigned char) (~(var_1)));
            }
        }
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
                arr_22 [(unsigned short)15] [i_4] [i_5] = ((/* implicit */short) ((((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            }
            var_24 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1347377828))))) : (((/* implicit */int) var_0))));
            var_25 = ((/* implicit */long long int) ((var_6) <= (((/* implicit */int) var_15))));
            arr_23 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((unsigned int) 264241152LL));
        }
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            arr_27 [i_6] [18ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)5364))));
            var_26 = ((/* implicit */unsigned short) (~(var_3)));
            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) / (var_3)));
            var_29 = var_14;
        }
        var_30 = ((/* implicit */unsigned int) ((var_6) == (var_2)));
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_31 -= ((/* implicit */unsigned int) -1347377841);
        arr_30 [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_8), (13242130410808984943ULL))))));
        var_32 = ((/* implicit */unsigned long long int) var_0);
        var_33 = ((((-216036693) + (2147483647))) << (((/* implicit */int) (!((_Bool)1)))));
    }
    var_34 = ((/* implicit */int) var_12);
}
