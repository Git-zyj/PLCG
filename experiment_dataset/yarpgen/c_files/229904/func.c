/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229904
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        var_10 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30994)) ? (arr_2 [i_0 - 2]) : (arr_1 [i_0 + 3] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(arr_0 [i_0 - 1])));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [1ULL] [i_2] [i_1] = ((/* implicit */unsigned int) (~(arr_2 [i_0 + 1])));
                        var_11 &= ((/* implicit */_Bool) var_4);
                        var_12 *= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [6U])) || (((/* implicit */_Bool) (signed char)92)))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) ((unsigned short) arr_8 [(short)0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_4] [i_4 - 3]))));
        var_14 = ((/* implicit */int) max((var_14), ((+(((/* implicit */int) arr_16 [i_4] [i_4 + 2]))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_4 + 2] [i_4 - 2])) >> (((((/* implicit */int) (signed char)92)) - (87))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-83))))) : (((/* implicit */int) (unsigned char)76)))))))));
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_6] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)88))) : (-1113174188818519029LL)));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_26 [i_6] [i_7] [i_8] [i_9])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_0))))));
                            var_20 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_8))) ? (((/* implicit */int) arr_18 [i_8])) : ((~(((/* implicit */int) (signed char)92))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((short) arr_30 [i_7 + 2] [i_9] [i_8 + 3] [i_8 + 1])))));
                            arr_31 [i_9] [i_8 + 1] [i_8] [(_Bool)1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1609)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [5ULL] [7ULL]))));
                        }
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 14036015073279690802ULL))));
                        arr_32 [i_5] [i_5] [i_8] [i_5] [8U] = ((/* implicit */signed char) ((((_Bool) (signed char)31)) && (((/* implicit */_Bool) -4558563904257326888LL))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [i_5] [(unsigned char)7])) + (((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) (unsigned short)6264))));
        }
        var_24 = ((/* implicit */int) var_7);
        /* LoopNest 3 */
        for (unsigned char i_10 = 3; i_10 < 20; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (int i_12 = 2; i_12 < 20; i_12 += 4) 
                {
                    {
                        var_25 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (arr_19 [5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((arr_37 [10] [11LL] [i_10 - 3] [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27964)))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [i_10] [i_12] [i_11])) ? (((/* implicit */unsigned long long int) 0)) : (12427926862152162103ULL)))) ? (1764049662) : (((/* implicit */int) var_7)))));
                        arr_43 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((long long int) -125692316))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65524))))))));
                        var_27 = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
        } 
    }
}
