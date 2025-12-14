/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215508
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
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)35364)), (6947525365870257521ULL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!((!((_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_0]))) ? (((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) % (((/* implicit */int) (unsigned short)5519)))) : (arr_6 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned int) arr_12 [6ULL] [i_1] [i_2] [i_2] [i_3] [i_2] [i_4]);
                                arr_14 [i_0] [i_1] [i_2] [i_3] = (!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_5 = 3; i_5 < 24; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_5 + 1])) ? (((/* implicit */int) (short)30389)) : (((/* implicit */int) (short)-21343))))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_5 - 2] [i_5 - 2])) <= (((/* implicit */int) (unsigned char)117))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)4)))))))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        arr_25 [i_5] [i_6] [i_7 + 2] [i_7 + 2] [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_21 [i_7 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6]))))) : (((/* implicit */int) max((arr_18 [i_5 - 3] [i_6] [i_7]), (((/* implicit */short) (unsigned char)1)))))))));
                        arr_26 [i_8] [i_6] [i_6] [i_6] [i_5 - 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-93))))) ? (((((/* implicit */_Bool) ((short) arr_19 [i_7]))) ? ((+(((/* implicit */int) arr_23 [i_8] [(unsigned char)18] [i_6] [i_5])))) : (((/* implicit */int) min(((short)32750), ((short)508)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)51))))) ? (((((/* implicit */int) (short)-32609)) ^ (((/* implicit */int) arr_19 [(unsigned char)0])))) : (((/* implicit */int) (signed char)74)))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? ((+(10893856097391209985ULL))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)5)) & (((/* implicit */int) (signed char)35)))), (((/* implicit */int) arr_21 [i_7 + 2])))))));
                    }
                } 
            } 
        } 
        arr_27 [15] [i_5] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-513)) >= (((/* implicit */int) (short)15763))))) >= (((/* implicit */int) (_Bool)0))));
        var_22 = ((/* implicit */unsigned char) ((max((((-9111242902452040861LL) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5 - 2]))))), (((/* implicit */long long int) max((((/* implicit */short) arr_22 [i_5 - 1] [i_5])), (arr_17 [i_5] [12U] [12U])))))) > (((/* implicit */long long int) (~(arr_24 [i_5]))))));
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_23 ^= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (signed char)73)), ((short)515)))) << (((/* implicit */int) ((((/* implicit */_Bool) max(((short)513), (((/* implicit */short) (_Bool)1))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64193))))))))));
        arr_31 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_28 [i_9] [i_9]))))));
        var_24 += ((/* implicit */signed char) max((((/* implicit */int) arr_18 [i_9] [i_9] [i_9])), ((-(((/* implicit */int) min(((short)525), (((/* implicit */short) (signed char)33)))))))));
    }
}
