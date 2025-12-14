/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227385
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_13 += max((((((/* implicit */unsigned long long int) -534954684)) + (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)65)) == (((/* implicit */int) (short)32460))))));
                    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) var_10))), (arr_4 [i_0] [(unsigned short)7] [i_2]))))));
                }
            } 
        } 
        var_15 *= ((/* implicit */_Bool) arr_3 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3])))), (((/* implicit */int) arr_3 [i_4]))))) ? (((((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 1] [i_6 + 1] [(short)0] [(_Bool)1])) | (((/* implicit */int) arr_6 [i_4 - 1] [10] [i_6 - 3] [(short)10])))) : (((((/* implicit */_Bool) ((short) var_12))) ? (((((/* implicit */_Bool) arr_12 [i_6] [10] [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_1)) : (2147450880))) : (((/* implicit */int) var_4))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-4)), (((((/* implicit */_Bool) (short)-13395)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)5), ((short)34))))) : (((((/* implicit */_Bool) 2994496566U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11))))))))))));
                                var_18 = ((/* implicit */int) arr_0 [8U]);
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 2032689337))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 4773940003405845065LL))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147450868)) ? (((/* implicit */int) (signed char)-75)) : (2032689337)))) ? (((((/* implicit */_Bool) max((-4485642445751152000LL), (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(var_12))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [4ULL] [4ULL] [i_4] [i_3] [(unsigned short)7])))));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
    {
        arr_19 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_7] [i_7] [i_7])))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (-2032689352)))) : (((((/* implicit */int) arr_7 [i_7] [i_7])) << (((((/* implicit */int) arr_7 [i_7] [i_7])) - (64)))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((1804832797) >> (((((((((/* implicit */_Bool) 2032689342)) && (((/* implicit */_Bool) arr_18 [i_7])))) ? (((/* implicit */int) arr_18 [i_7])) : ((+(((/* implicit */int) var_8)))))) + (16891))))))));
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 9; i_8 += 2) 
        {
            for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                {
                    arr_26 [(_Bool)1] [i_8] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */int) (short)-29)), (((2147450887) ^ (((/* implicit */int) (short)10))))));
                    var_23 = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) arr_12 [i_9] [i_9] [i_8] [i_7] [4ULL]))))))));
                    var_24 &= ((/* implicit */short) ((((/* implicit */long long int) var_5)) <= (min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64613)) || (((/* implicit */_Bool) (short)28748)))))))));
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) -2032689357)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) var_8)), (arr_6 [(unsigned short)5] [i_8] [i_9] [i_9]))))) : (min((var_0), (((/* implicit */unsigned int) var_7))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_26 &= ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) arr_14 [i_7] [i_7])), (arr_17 [i_9 + 1])))));
                        var_27 = ((/* implicit */unsigned long long int) arr_16 [i_7] [i_8 + 1] [i_9] [i_9] [i_10]);
                        var_28 -= ((/* implicit */short) ((((((/* implicit */unsigned long long int) (~(326119289)))) != (((((/* implicit */_Bool) (unsigned short)57847)) ? (((/* implicit */unsigned long long int) -2147450861)) : (4349004687599928754ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    }
                }
            } 
        } 
        var_29 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 10; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
            {
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + (-1LL)))) ? (((/* implicit */int) ((var_5) != (arr_23 [i_11] [i_12] [3LL])))) : (((/* implicit */int) ((unsigned short) arr_0 [4U])))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_12] [i_12 - 4] [i_12 - 2])) ? (((((var_9) + (2147483647))) >> (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5))))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_14] [i_13])) : (((/* implicit */int) var_8)))))))));
                                arr_43 [i_15] = (!(((/* implicit */_Bool) (+(var_9)))));
                                var_33 = ((/* implicit */signed char) ((int) arr_42 [i_11] [i_12 - 4] [i_12] [(short)7] [i_14] [8]));
                                var_34 = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_15]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            var_35 = var_1;
            arr_47 [(short)1] [i_16] = ((unsigned short) arr_15 [(short)3] [2ULL] [i_16] [i_16] [i_16]);
        }
    }
}
