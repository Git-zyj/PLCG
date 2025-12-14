/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27593
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
    var_20 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [7ULL] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(signed char)10])) || (((/* implicit */_Bool) var_5)))))));
                var_21 -= ((/* implicit */long long int) arr_4 [i_1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1050066897526470895LL)))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_4 [i_0 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)69)) + (((/* implicit */int) arr_4 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29104)) ? (((/* implicit */unsigned long long int) -1050066897526470896LL)) : (12088389234937595772ULL)))) ? (((1050066897526470895LL) / (-1050066897526470895LL))) : (1050066897526470895LL)))));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 3; i_4 < 12; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_0] = min((arr_1 [i_0] [i_4]), (((/* implicit */unsigned char) min(((signed char)0), ((signed char)-1)))));
                                arr_15 [i_4] [i_3] [i_3] [i_0] [i_3] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (288230376151711743ULL))), (((/* implicit */unsigned long long int) (-(arr_13 [i_0] [i_0] [i_2] [(unsigned short)3]))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) (unsigned char)216)) ? (((((/* implicit */_Bool) 5894860383190710549LL)) ? (((/* implicit */int) arr_2 [(signed char)14])) : (((/* implicit */int) var_15)))) : (arr_7 [i_0]))));
                                arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */long long int) max((arr_7 [i_0 + 2]), (arr_7 [i_0 - 2])))) : (((((/* implicit */_Bool) ((arr_2 [i_1]) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])))))) ? (1050066897526470896LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))));
                                arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */int) ((arr_3 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [(unsigned char)2] [i_4 - 3])) : (((/* implicit */int) var_18)))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (max((((((/* implicit */_Bool) var_18)) ? (9133305599801346038LL) : (var_14))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_7 [i_3]) : (((/* implicit */int) var_7)))))))));
                            }
                            for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                            {
                                var_23 ^= ((/* implicit */signed char) (~(((/* implicit */int) (short)17423))));
                                arr_22 [i_3] = ((/* implicit */signed char) var_8);
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2 - 1] [(unsigned short)14] [i_2] [i_2]))) : (((unsigned long long int) (short)0))));
                                arr_27 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) | (1050066897526470895LL)))));
        var_24 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_7 + 1] [i_7 - 1]))));
    }
    for (long long int i_8 = 2; i_8 < 11; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)49106))));
            var_26 |= (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))));
            var_27 -= ((/* implicit */_Bool) (-(var_9)));
            var_28 *= ((/* implicit */signed char) max((min(((+(((/* implicit */int) arr_23 [i_8] [i_8] [i_8])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-29078)) : (((/* implicit */int) (unsigned short)63055)))))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -418472896))))) < (((/* implicit */int) (signed char)3)))))));
            arr_35 [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_8] [2LL])) || (((/* implicit */_Bool) var_3))))), (((unsigned short) 1050066897526470895LL)))));
        }
        var_29 = ((/* implicit */int) 57344LL);
        arr_36 [i_8] [i_8] &= ((/* implicit */unsigned char) (+(min((((/* implicit */int) ((5487230139933265040ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [0LL] [i_8] [i_8] [i_8 - 2])))))), ((~(((/* implicit */int) arr_33 [i_8] [i_8] [i_8]))))))));
        var_30 = ((/* implicit */signed char) ((((var_12) || ((!(((/* implicit */_Bool) (unsigned char)81)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_25 [i_8 + 3] [i_8] [8LL] [i_8] [i_8 + 3] [i_8 + 3] [i_8 + 3]), (arr_25 [i_8 + 1] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8 + 1])))) || ((!(((/* implicit */_Bool) arr_4 [i_8]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)0)), (1073741823ULL)))))))));
        arr_37 [i_8 - 1] = ((/* implicit */unsigned char) (((+(arr_34 [i_8 + 1] [i_8 + 1] [i_8 - 1]))) ^ ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    }
    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) var_3))))) : (((/* implicit */int) var_2)))))));
}
