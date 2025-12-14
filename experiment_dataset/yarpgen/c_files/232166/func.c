/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232166
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
    var_19 = ((/* implicit */signed char) (unsigned short)28605);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */short) 2958402999U);
        arr_3 [1ULL] = ((/* implicit */long long int) (((+(arr_0 [i_0 - 1]))) == (((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 + 2])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            {
                var_20 = max((arr_4 [i_2 - 1]), (((/* implicit */unsigned short) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1])))))));
                var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_15)))));
                var_22 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)27))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (_Bool)0))));
        var_24 = ((/* implicit */unsigned int) ((-5168837011335223350LL) == (((/* implicit */long long int) 897648645U))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 4) 
        {
            var_25 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (2420499451U))))) | (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            arr_14 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_3] [i_4 - 2] [i_4])) | (((/* implicit */int) var_2))));
            var_26 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1052862355)))))) == (((long long int) var_10))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (unsigned short i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        {
                            arr_21 [i_3] [i_3] = ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5140))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_5] [(unsigned short)8]))))) != ((-(((/* implicit */int) var_16))))));
                            var_28 = arr_9 [i_3];
                            var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) > (4767380300930181620ULL)));
                            arr_22 [i_3] [i_4] [i_3] [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_7] [i_7 + 2] [i_7 + 1] [i_7]))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 4; i_8 < 9; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_3] [i_8] [i_9])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            arr_32 [i_9] [(unsigned char)5] [i_9] [i_9] = ((/* implicit */unsigned short) ((signed char) arr_16 [i_3] [i_9] [i_10]));
                            var_31 = ((/* implicit */unsigned long long int) var_11);
                            arr_33 [i_10] [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) : (arr_12 [i_10] [i_10])))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14104))) > (6358271171636939057ULL)))));
                        }
                    } 
                } 
            }
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((897648645U) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_8 - 3] [i_8 + 1] [i_3])) == (((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [1ULL])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3]))) | (1241799126346623301ULL))))))));
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3] [i_8] [i_8])) ? (((unsigned long long int) arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        }
    }
}
