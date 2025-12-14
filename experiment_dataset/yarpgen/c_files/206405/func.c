/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206405
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
    var_10 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)146)) ? (3980863954U) : (1779643969U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)21256)) : (((/* implicit */int) (unsigned char)183)))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_0))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_0] [i_1] [i_3])), ((signed char)57)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-21257), ((short)21256)))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 = ((unsigned char) arr_0 [i_1] [i_3]);
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned long long int) var_6)))));
                            var_14 = (-(((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (arr_5 [3ULL] [3ULL])))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [(_Bool)1] [14ULL])) < (((/* implicit */int) arr_6 [1LL] [(signed char)3] [i_2]))))) : (((((/* implicit */_Bool) var_0)) ? (-1696444151) : (((/* implicit */int) arr_13 [17U] [i_1 + 1] [13ULL] [i_3] [(signed char)3])))))));
                        }
                        for (int i_5 = 3; i_5 < 19; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) arr_17 [8] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_5 + 1])), (arr_0 [i_1 - 2] [(signed char)7]))))));
                            var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) (short)-19510)) || ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 3; i_6 < 21; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */unsigned long long int) -1696444131)) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_22 [i_0] [i_1] [i_2] [i_0] [i_0]))) && (((/* implicit */_Bool) var_7)))))));
                            arr_23 [14ULL] [i_6] [i_2] = min((arr_14 [i_6] [i_3] [(short)6] [i_1 - 2] [i_6]), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_2] [(signed char)1]))))), ((unsigned char)118)))));
                            arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-6077080457444875467LL), (((/* implicit */long long int) (signed char)-1))))) ? (((/* implicit */int) ((_Bool) -1696444149))) : (((/* implicit */int) ((unsigned short) ((unsigned char) arr_12 [12U] [i_3] [(short)15] [18U] [i_1] [i_0]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            arr_28 [i_0] [i_0] [(short)10] [11] [11] = ((/* implicit */signed char) ((int) var_9));
                            arr_29 [(signed char)13] [(signed char)5] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [10] [10] [(short)2]);
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 1779643969U))));
                            arr_30 [8] [i_1 - 2] [i_2] [i_2] = (+(((((/* implicit */_Bool) 2287053665U)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_8)))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_19 ^= ((signed char) arr_20 [i_0] [i_8] [i_2] [i_8] [8] [i_8]);
                        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_2] [(unsigned short)21]);
                    }
                    var_22 *= ((/* implicit */unsigned char) (short)19512);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                for (short i_11 = 2; i_11 < 21; i_11 += 2) 
                {
                    {
                        arr_43 [i_9] [i_10] [(signed char)0] [17] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_0 [8U] [8U]), (((/* implicit */short) arr_17 [i_0] [15U] [(_Bool)1] [(unsigned char)17] [i_10] [(unsigned short)14])))))))) ? (((/* implicit */long long int) (+(((arr_9 [i_0] [7LL]) ? (((/* implicit */int) arr_40 [(unsigned short)2])) : (((/* implicit */int) arr_15 [i_0] [15LL] [i_9] [15LL] [i_10] [16ULL]))))))) : (var_1)));
                        /* LoopSeq 4 */
                        for (unsigned int i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            var_23 ^= ((/* implicit */signed char) ((unsigned short) ((unsigned int) ((((/* implicit */_Bool) 8343384890386769003ULL)) && (((/* implicit */_Bool) 2515323323U))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)187)) < (1696444165)));
                            arr_46 [i_9] [i_9] [(_Bool)1] [i_9] = ((/* implicit */short) arr_40 [i_0]);
                            arr_47 [i_9] [i_9] [i_10] [(signed char)1] [i_9] [(signed char)21] = ((/* implicit */long long int) (unsigned short)0);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            arr_51 [i_0] [(signed char)7] [5] [i_9] = ((/* implicit */int) var_5);
                            var_25 = ((/* implicit */unsigned long long int) min((-11LL), (((/* implicit */long long int) (short)-19692))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            var_26 = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))) : (16ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                            arr_54 [i_0] [i_9] [i_10] [i_11 - 2] [i_14] = ((/* implicit */_Bool) -1696444149);
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            arr_57 [i_9] [15U] [i_10] = ((/* implicit */unsigned short) arr_27 [i_11 + 1] [(unsigned char)4] [i_11 + 1] [i_15 + 1] [i_15 + 1]);
                            var_27 = ((/* implicit */_Bool) min((17977625715896279541ULL), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) arr_31 [13ULL]))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_28 += ((/* implicit */unsigned char) ((unsigned int) ((_Bool) arr_14 [i_16] [i_16] [i_16] [i_16] [16LL])));
        var_29 = ((/* implicit */signed char) -1696444151);
    }
}
