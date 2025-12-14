/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248723
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_6 [(unsigned short)5] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))));
                arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                arr_8 [(_Bool)1] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_2]);
            }
            for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) arr_0 [(unsigned short)11]);
                            arr_16 [(_Bool)1] [i_0] [i_3] [i_4] [i_1] [i_3] = ((/* implicit */signed char) ((unsigned long long int) (signed char)127));
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)114)))) ? (1640958930U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-115)) : ((-2147483647 - 1))))))))));
                            arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] [i_1] = ((/* implicit */unsigned short) (unsigned char)236);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((signed char)-125), (((/* implicit */signed char) (_Bool)1)))))))) ? ((((-(var_8))) | (((/* implicit */unsigned long long int) min((-6113173126525872300LL), (((/* implicit */long long int) (signed char)117))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_14 [i_0] [7U] [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14733)))))) ? (((/* implicit */unsigned long long int) arr_14 [i_3] [i_0] [i_0] [i_0])) : (((var_17) >> (((var_3) - (234027850)))))))));
                var_22 = ((/* implicit */unsigned short) (_Bool)1);
                var_23 = ((/* implicit */signed char) ((arr_0 [i_3]) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            }
            arr_20 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_0] [i_1])))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                arr_27 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_16)), ((~(((/* implicit */int) (unsigned short)36067))))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        {
                            arr_33 [i_0] [i_8] [i_7] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_7 + 3] [(unsigned short)14]) - (arr_2 [i_0] [i_7 + 3] [i_7 + 1])))) ? (((/* implicit */unsigned long long int) 0LL)) : ((-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_17)))))));
                            arr_34 [i_9] [i_0] [i_7] [i_0] [i_0] = ((((/* implicit */_Bool) 313667939U)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (signed char)102)));
                            var_24 = arr_30 [i_0] [0LL] [i_7] [i_0] [0LL];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) var_9);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (signed char)-90))) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (unsigned short)45892))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        {
                            arr_45 [i_13] [i_12] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_30 [i_7] [i_0] [i_7] [i_0] [i_6]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)127))))) : (920063680424022103ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                            arr_46 [i_0] [i_13] [i_12] [i_7] [i_6] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || ((_Bool)0)));
                        }
                    } 
                } 
                arr_47 [i_0] = ((/* implicit */signed char) ((unsigned short) (+(arr_9 [i_7 + 4] [i_7 + 2] [i_0] [i_7 + 1]))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                arr_50 [i_0] [i_0] [i_14] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                arr_51 [i_0] [i_6] = ((/* implicit */long long int) ((arr_22 [i_0]) ? ((+(((/* implicit */int) var_0)))) : ((+((-(((/* implicit */int) (_Bool)1))))))));
                arr_52 [i_0] [i_6] [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28548)) ? (((/* implicit */int) (unsigned short)0)) : (arr_48 [i_0] [i_0])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_6] [i_6] [i_0] [i_14]))) + (arr_38 [i_0] [i_6] [i_6] [i_6] [i_14] [i_14]))));
            }
            var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) arr_31 [i_0] [(unsigned char)15] [i_0])))))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_6] [i_0] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_6] [i_6] [i_6] [i_0])))))) : (((unsigned int) var_1))));
        }
        var_29 = ((/* implicit */long long int) var_18);
        arr_53 [i_0] = ((/* implicit */_Bool) min((-12), (((/* implicit */int) (_Bool)1))));
    }
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)34710)) : (((/* implicit */int) (_Bool)1)))) * (((2147483647) % (((/* implicit */int) (signed char)-11))))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
    var_31 = ((/* implicit */short) min((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_13))))));
}
