/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44949
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (short)(-32767 - 1))));
                            var_14 = ((/* implicit */unsigned int) ((4192408538409145347ULL) << (((/* implicit */int) (signed char)30))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */short) (unsigned char)176)), ((short)(-32767 - 1)))), (((/* implicit */short) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) (unsigned short)22989)) ? (((/* implicit */int) (short)32762)) : (-1641077963))) : (((/* implicit */int) ((max((-6638204103274579722LL), (((/* implicit */long long int) (short)32767)))) < (arr_8 [i_0] [i_0] [i_2] [i_2]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_16 = arr_0 [i_0] [i_1];
                                var_17 = ((/* implicit */unsigned int) 4192408538409145347ULL);
                            }
                        } 
                    } 
                    arr_20 [(unsigned char)9] [4] [7LL] [i_0] = ((/* implicit */signed char) ((long long int) (short)-27333));
                }
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5616236672872352923LL)) ? (2147483647) : ((-2147483647 - 1)))))));
                var_19 = (!(((/* implicit */_Bool) (-(var_0)))));
                var_20 = ((/* implicit */long long int) ((unsigned char) arr_1 [i_0]));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((/* implicit */short) var_4)), (var_1)));
}
