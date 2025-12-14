/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23003
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = arr_1 [i_1] [i_0];
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)64180))));
                            var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)3661)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)0), ((unsigned short)0)))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) arr_1 [(unsigned short)8] [i_3])) ? (((/* implicit */int) (unsigned short)11463)) : (((/* implicit */int) (unsigned short)36697)))))))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) arr_0 [i_0 - 4])) << (((((((/* implicit */_Bool) (unsigned short)28839)) ? (((/* implicit */int) arr_2 [i_0 - 4] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0 - 4])))) - (5100))))) : (((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1]))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)9513)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_3))))) & (((((/* implicit */int) (unsigned short)19832)) ^ (((/* implicit */int) (unsigned short)9513))))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2212)) % (((/* implicit */int) (unsigned short)44865))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 4; i_4 < 12; i_4 += 3) 
    {
        var_24 = var_1;
        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28838)) ^ (((/* implicit */int) arr_2 [i_4] [i_4 + 1] [(unsigned short)2]))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [(unsigned short)22])) <= (((/* implicit */int) arr_5 [i_4])))))))) ? (((((((/* implicit */int) (unsigned short)11)) & (((/* implicit */int) arr_4 [i_4] [i_4])))) | (((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)24881)) : (((/* implicit */int) (unsigned short)9672)))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))), ((~(((/* implicit */int) (unsigned short)36680))))))));
    }
}
