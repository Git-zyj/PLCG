/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248266
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_2 [i_0] [i_0]))))) | (min((((/* implicit */unsigned int) (short)3072)), (((((/* implicit */_Bool) arr_1 [(short)14])) ? (4151109895U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((-2472908226469844662LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))));
        var_20 = max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    var_21 -= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 143857378U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_7 [i_3] [i_2] [i_2]))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39975)) ? (2472908226469844664LL) : (2472908226469844654LL)))) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)93)))))));
                    var_23 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)-1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))))));
                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned char)181))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_4])) : (((/* implicit */int) arr_12 [i_1])))))));
            var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)120)) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)200)) > (((/* implicit */int) (unsigned short)65535))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
        {
            arr_17 [(unsigned char)0] [i_1] |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
            var_27 |= ((/* implicit */long long int) var_12);
        }
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */short) (_Bool)1);
            arr_20 [i_6] [i_6] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
            {
                var_29 ^= ((/* implicit */unsigned char) var_11);
                arr_27 [i_8] [i_7] = ((/* implicit */unsigned short) (~((+(1008979493557400350LL)))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (-2147483647 - 1)))) ? (((/* implicit */int) ((_Bool) (unsigned char)75))) : ((~(((/* implicit */int) arr_16 [19ULL] [i_7] [i_8]))))));
            }
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned int) (unsigned short)26719);
                var_32 |= ((/* implicit */unsigned long long int) arr_12 [i_1]);
            }
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_7])) % (((/* implicit */int) arr_2 [i_1] [i_1]))));
        }
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])));
    }
    var_35 &= var_10;
}
