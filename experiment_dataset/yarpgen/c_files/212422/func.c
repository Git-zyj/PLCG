/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212422
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
    var_20 = ((/* implicit */signed char) (~(var_12)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (~(-3771408933497525950LL))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned int) ((unsigned short) (~(-3988524499315198030LL))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_23 ^= ((/* implicit */long long int) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (0ULL))) + (((/* implicit */unsigned long long int) (+(268435455LL))))))));
                        arr_13 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) 16515072))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) -16515070);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_24 += ((/* implicit */unsigned int) -425354320);
                        arr_19 [i_0] [(unsigned char)0] [i_4] [i_4] [12U] = ((/* implicit */unsigned char) ((short) (((+(18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 5ULL)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_2] = ((/* implicit */short) -9223372036854775801LL);
                        var_25 = ((/* implicit */long long int) ((970511849U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) (unsigned short)11794)))))));
                    }
                }
                for (unsigned char i_6 = 4; i_6 < 23; i_6 += 4) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 16515072);
                    var_26 = ((/* implicit */long long int) -16515072);
                }
                for (unsigned char i_7 = 4; i_7 < 23; i_7 += 4) /* same iter space */
                {
                    var_27 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 0LL)) & ((~(2ULL)))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!((_Bool)1)))))) >= ((~(((/* implicit */int) ((signed char) (short)32744)))))));
                }
                var_29 -= ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32903))) / (8ULL)))));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (+(((/* implicit */int) ((_Bool) 6501548155498210449ULL))))))));
                var_31 ^= ((/* implicit */_Bool) (~(((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39423)))))));
            }
        } 
    } 
    var_32 = (+(2685612838U));
}
