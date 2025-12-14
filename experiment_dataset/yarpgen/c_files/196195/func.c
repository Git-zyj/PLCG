/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196195
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
    var_11 = ((/* implicit */long long int) ((((long long int) var_6)) == (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)874), (((/* implicit */unsigned short) (signed char)17))))))));
    var_12 = 16977226038305480078ULL;
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (max((((arr_1 [i_3] [i_2]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64662))))), (max((((/* implicit */long long int) (unsigned short)874)), (5LL)))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)9), (((/* implicit */unsigned short) arr_9 [10ULL] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0]))))) ? ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0])))) : (((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0])))));
                        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_3] [i_2]))));
                        var_16 = ((/* implicit */signed char) ((((((0ULL) & (18446744073709551588ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_0] [i_2] [i_0] [i_0] [i_0]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [4ULL] [i_2]))) ^ (18446744073709551589ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)3] [(_Bool)1]))) ^ (var_10))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))))))));
                        var_17 *= (~(((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3]))) : (arr_0 [i_0]))));
                    }
                    arr_10 [i_0] [i_2] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((short) ((((var_2) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) - (200))))))) : (((/* implicit */unsigned char) ((short) ((((var_2) + (2147483647))) >> (((((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) - (200))) + (53)))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1]))))), (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2]) : (arr_6 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2])))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), ((-(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64660))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [2ULL] [i_0] [2ULL])), (var_10)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (7007120191335157066ULL)))))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_1))));
                    var_20 *= ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned char) ((((arr_3 [i_0] [i_4 - 1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [(unsigned char)16] [i_4 + 2])))) != (((((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)0])) + (((/* implicit */int) (unsigned char)176)))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) (+((-(((/* implicit */int) var_6))))))), (var_8)));
                        var_22 = var_7;
                    }
                } 
            } 
            var_23 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11439623882374394550ULL)))) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [5LL]))))) & (((((/* implicit */_Bool) (-(5LL)))) ? (11439623882374394550ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [18])) && (((/* implicit */_Bool) 7007120191335157064ULL)))))))));
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            var_24 = ((/* implicit */short) (+((~(13ULL)))));
            var_25 = ((/* implicit */unsigned char) 18446744073709551600ULL);
            arr_26 [i_0] [(short)11] [i_9] = ((/* implicit */unsigned long long int) var_6);
        }
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_26 -= ((/* implicit */signed char) arr_16 [12ULL] [12ULL] [12ULL] [i_0]);
            var_27 &= ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_10] [i_10]);
            arr_29 [14LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 11439623882374394560ULL)) ? (((/* implicit */unsigned long long int) 2124661995U)) : (18446744073709551600ULL)));
        }
    }
}
