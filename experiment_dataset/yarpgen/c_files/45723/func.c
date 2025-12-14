/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45723
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
    var_14 = var_13;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_11 [i_2] [i_0] [i_1] = var_6;
                        arr_12 [i_2] [i_2] [i_2] [(unsigned char)6] = var_0;
                        arr_13 [i_2] [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned char) ((arr_7 [i_2] [i_2]) ? (-4125987218195485885LL) : (4125987218195485874LL))));
                        arr_14 [i_2] [i_2] [(_Bool)1] [i_2 + 1] [i_2] [i_2] = ((/* implicit */signed char) (+(max((arr_2 [i_0] [i_2] [i_3]), (arr_2 [i_2 + 1] [i_1] [i_0])))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) : (4125987218195485874LL))))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_5 [i_0] [i_0] [i_0]))))));
        arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (arr_2 [i_0] [i_0] [(unsigned short)12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (arr_5 [i_0] [i_0] [(signed char)7]) : (arr_4 [i_0] [i_0])));
    }
    var_15 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned char) ((4125987218195485908LL) >= (((/* implicit */long long int) 3283113584U))))), ((unsigned char)104))), (((/* implicit */unsigned char) ((signed char) var_0)))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        arr_20 [(unsigned char)3] [i_4] = (unsigned char)178;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                arr_26 [i_6] [i_5] = ((/* implicit */short) ((arr_21 [i_6 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [14LL] [i_6] [14LL] [i_4]))) : (((((/* implicit */_Bool) 1118984339U)) ? (arr_6 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                arr_27 [i_4] [i_5] [(signed char)1] = ((/* implicit */signed char) ((arr_9 [8ULL] [(_Bool)1] [i_4 - 2] [i_5]) >= (arr_9 [i_5] [i_5] [i_4 - 1] [i_6 - 1])));
            }
            arr_28 [i_5] [i_4] [4ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4 - 1])) && (((/* implicit */_Bool) arr_3 [(_Bool)0] [i_4 - 2]))));
        }
        /* LoopSeq 2 */
        for (int i_7 = 4; i_7 < 8; i_7 += 1) 
        {
            arr_31 [i_7] [i_7] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (arr_3 [i_4] [(unsigned short)5]) : (arr_3 [i_7 - 1] [1LL])));
            arr_32 [i_4 + 1] [i_4 + 1] [i_7] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)1)) && (((/* implicit */_Bool) var_5)))));
            arr_33 [i_4] [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)128)), ((unsigned short)65534)));
        }
        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            arr_38 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-60))))) : (((/* implicit */int) (signed char)34))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!((_Bool)0))))));
            arr_39 [i_4] = var_3;
            arr_40 [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned short)65534), (((/* implicit */unsigned short) (unsigned char)104))))), ((+(arr_30 [i_4 - 1] [i_4] [i_4])))));
        }
        arr_41 [2] [i_4] = ((/* implicit */unsigned char) -4125987218195485885LL);
    }
    var_16 = ((/* implicit */_Bool) 4125987218195485908LL);
}
