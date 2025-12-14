/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44109
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)2] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 - 1] [(unsigned short)6])) : (arr_5 [(signed char)16] [i_1 + 1] [i_1 + 1]))))));
            arr_6 [(signed char)0] [(unsigned short)0] |= ((/* implicit */signed char) (((+(arr_0 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 4; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((unsigned short) -9));
                            var_20 ^= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            arr_16 [i_1] [i_3] [i_3] [i_3] [16LL] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2)) ? (-983799058) : (((/* implicit */int) arr_7 [i_1] [i_4] [i_4]))));
                            var_21 = ((/* implicit */unsigned short) var_13);
                            arr_17 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-5318198144504979505LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_4] [i_3]))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */_Bool) ((int) arr_12 [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1]));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1] [i_1 + 1]))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 3; i_5 < 13; i_5 += 2) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)5] [i_0] [i_5 - 1]))) | (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0])))))));
            arr_22 [i_0] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_0] [i_5]))) : (var_0))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_7 [i_5] [i_0] [i_5])) : (1170601013))))));
        }
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) var_9))), (arr_8 [i_0] [2LL] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) max((arr_18 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_9)))))));
    }
    for (unsigned int i_6 = 2; i_6 < 22; i_6 += 3) 
    {
        arr_26 [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) != (-9)));
        var_26 = ((/* implicit */unsigned long long int) var_16);
        /* LoopSeq 2 */
        for (int i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            arr_29 [i_7] [i_7 + 2] [i_7] = ((/* implicit */unsigned short) -1309280815);
            arr_30 [(_Bool)1] [(unsigned short)0] [i_7 - 1] |= ((/* implicit */unsigned long long int) (unsigned short)17941);
        }
        for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) arr_31 [i_6] [i_6] [i_8]);
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) ((((_Bool) var_1)) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(var_17)))) || (((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (18014364149743616LL)))))))));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_7)))));
                            var_30 = ((/* implicit */long long int) min((min((((((/* implicit */int) var_15)) | (((/* implicit */int) arr_31 [i_8] [i_9] [i_10])))), ((~(((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            } 
            arr_41 [i_8 - 1] [i_6] = ((/* implicit */unsigned int) arr_23 [i_8]);
            var_31 = ((/* implicit */unsigned char) max((-1885425419), (1885425434)));
        }
        var_32 = ((/* implicit */long long int) 17561891568715835442ULL);
    }
    var_33 = ((/* implicit */_Bool) var_10);
}
