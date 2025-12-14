/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195768
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
    var_14 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_3 [i_0] [(unsigned char)10] [i_0]))))) ? (var_1) : ((~(((/* implicit */int) (unsigned short)2047))))))), (((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))) : (7019024497410722056LL)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_12 [14] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) arr_11 [i_0])))) ? (((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [0ULL])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3] [(unsigned short)16]))))))) : (max(((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)3] [i_4])))), (((/* implicit */int) max(((unsigned short)50938), (var_9))))))));
                                arr_13 [(signed char)10] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) arr_0 [i_0]);
                                arr_14 [i_0] [(unsigned char)4] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) arr_0 [i_0])) : (min((((((/* implicit */_Bool) 3820790882029441089LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)22615)))), (((/* implicit */int) var_0))))));
                                arr_15 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]);
                                arr_16 [0] [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((min((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])), (-3820790882029441089LL))) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)164)) ? (3820790882029441089LL) : (-557166870330611038LL)))) || (((/* implicit */_Bool) (short)-22616))))) - (1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_8 [i_5] [(unsigned char)6])) ^ (((/* implicit */int) (short)-22603)))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [(unsigned short)12] [i_5] [(signed char)10])))))))));
        arr_20 [i_5] = ((/* implicit */int) var_5);
    }
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    arr_30 [i_6] [i_6] [i_8] = ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) <= (arr_21 [i_7]));
                    arr_31 [i_6] [i_7] [(unsigned char)9] = ((/* implicit */short) arr_9 [i_6]);
                    arr_32 [i_6] [i_7] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (!(var_3)))))) / (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (-44419220)))) ? (((((/* implicit */int) var_10)) >> (((arr_28 [(unsigned short)18] [5ULL]) - (1117542008967783192LL))))) : (((/* implicit */int) arr_9 [i_8]))))));
                }
            } 
        } 
        arr_33 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((var_2) ? (-7740891608437903404LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (arr_21 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25461)))))));
    }
    var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (_Bool)1))))) - (((/* implicit */int) ((_Bool) var_10)))))));
}
