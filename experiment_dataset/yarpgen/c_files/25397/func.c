/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25397
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
    var_19 -= var_8;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)7)), (-1638669385)))) ? (max((arr_2 [i_1]), (((/* implicit */unsigned int) arr_3 [(short)1] [(unsigned char)8] [i_1 - 2])))) : (((/* implicit */unsigned int) (+((-2147483647 - 1)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (4294967273U))) : (((((((/* implicit */_Bool) 4294967273U)) ? (arr_2 [i_1]) : (2569098031U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (short)-31497)))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    var_21 -= ((/* implicit */int) ((max((max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_2 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)0)) : (arr_4 [i_0] [i_0])))))) >= (((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_1 [i_0] [i_0])), (arr_4 [i_1] [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1 - 1] [10ULL] [10ULL])) : (((((/* implicit */int) arr_7 [i_0])) / (((/* implicit */int) arr_7 [i_0])))))) ^ (((int) (unsigned char)17))));
                }
                var_22 = ((/* implicit */short) max((4294967272U), (((/* implicit */unsigned int) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] [(unsigned char)5]))))));
                            var_24 -= ((/* implicit */unsigned char) ((((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_7 [i_0])))) & ((~(-1423311049))))) | (((((-1) | (((/* implicit */int) (unsigned char)17)))) ^ (((((/* implicit */int) arr_7 [i_3])) & (arr_4 [i_4] [i_4])))))));
                            arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((arr_6 [i_3] [i_1 + 1] [(unsigned char)21] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)3)), (-1058154896)))) && (((/* implicit */_Bool) 1058154890)))))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) == (18446744073709551615ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
