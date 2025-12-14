/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50124
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((_Bool) ((((var_11) + (2147483647))) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (var_7))) + (787539249LL))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(13))) : ((~(((/* implicit */int) (unsigned char)67))))))) ? (((/* implicit */unsigned int) var_1)) : (((unsigned int) arr_1 [i_0 - 1]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1 - 1])) ? (arr_4 [i_0 - 1] [i_1 - 1]) : (arr_4 [i_0 + 1] [i_1 - 1])))));
            var_15 = ((/* implicit */int) -7896448076830169428LL);
        }
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5317079888113039306LL)) ? (49152) : (((/* implicit */int) (signed char)20))));
    }
    for (signed char i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = min((1381309477), (((/* implicit */int) (short)-23717)));
        var_17 = ((/* implicit */long long int) -49153);
        /* LoopSeq 1 */
        for (unsigned char i_3 = 4; i_3 < 16; i_3 += 4) 
        {
            var_18 -= ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_5)))) || ((_Bool)1))), ((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))))))));
            arr_14 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_4)), (max((((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) -971737237)) ? (((/* implicit */int) (signed char)-12)) : (var_1))))))));
            arr_15 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_2 [i_3 - 2]), (((/* implicit */signed char) (_Bool)1))))) % (((/* implicit */int) ((((/* implicit */_Bool) 7237456570671406802ULL)) || (((/* implicit */_Bool) arr_3 [i_2 - 2] [(signed char)16] [i_3]))))))) >= (((/* implicit */int) (signed char)23))));
        }
    }
    for (signed char i_4 = 2; i_4 < 17; i_4 += 4) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */unsigned short) (signed char)39);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-31130)) ? (((/* implicit */int) arr_2 [i_4 - 1])) : (((/* implicit */int) arr_2 [i_4 - 2])))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_4] [i_4]) && (((/* implicit */_Bool) (signed char)72)))))) >= (max((((/* implicit */unsigned long long int) arr_17 [16LL] [i_4])), (var_12)))))))))));
    }
    for (signed char i_5 = 2; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_0))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_24 [13LL] = ((/* implicit */int) (~((+(1637997752077762743ULL)))));
            var_21 -= ((/* implicit */unsigned char) max((max(((~(((/* implicit */int) (signed char)19)))), (((/* implicit */int) ((_Bool) (unsigned char)188))))), (((/* implicit */int) (short)4094))));
        }
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) + (var_12))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_20 [i_5] [i_5])), (var_11))) * (((((/* implicit */_Bool) arr_0 [i_5] [i_7])) ? (((/* implicit */int) arr_8 [i_5] [i_7])) : (-1617864155)))))))))));
            var_23 += (((((!(((/* implicit */_Bool) (short)-26311)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 9192766646926244922LL))))) : (max((((/* implicit */int) arr_20 [(signed char)10] [i_5 + 1])), (var_6))))) > (((/* implicit */int) max((arr_25 [i_7] [i_7] [i_7]), (arr_25 [i_7] [i_7] [i_5 - 1])))));
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) max((var_24), (max(((-(((/* implicit */int) var_5)))), ((+(var_6)))))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) arr_22 [i_8]))))) ? ((-(-8728775907428989999LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)8882))))))))));
                }
            } 
        } 
    } 
}
