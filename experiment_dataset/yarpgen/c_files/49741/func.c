/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49741
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (_Bool)1))) < (((/* implicit */int) ((-8763896127009214607LL) <= (((/* implicit */long long int) 1753837570U)))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [(signed char)4] [i_0 - 1]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0]);
            arr_6 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (-(-8931815763204439864LL)));
        }
        arr_7 [i_0 + 1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))));
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */long long int) -1582817565);
                    arr_16 [(signed char)7] [i_2] [(unsigned short)10] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_2])) ? (arr_8 [i_2] [i_3]) : (arr_8 [i_2] [i_4])))) || (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_14 [(_Bool)1])))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        arr_19 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */int) (unsigned short)65520);
                        arr_20 [i_2] [i_5] [(signed char)1] [i_4] [i_5 - 3] = ((/* implicit */signed char) (~(1910076864U)));
                        arr_21 [i_3] [i_5] [i_5] = ((/* implicit */int) (((~((-(arr_13 [1U] [i_4] [i_3]))))) >> ((((~(((/* implicit */int) ((unsigned short) 1753837560U))))) + (28705)))));
                    }
                    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2] [i_3] [i_4]))))) ? ((~((~(((/* implicit */int) arr_1 [2LL])))))) : ((~(-722064886)))));
                }
            } 
        } 
    } 
}
