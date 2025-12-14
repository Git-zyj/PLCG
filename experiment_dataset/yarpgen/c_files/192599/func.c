/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192599
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */_Bool) var_9);
                    var_11 = ((/* implicit */long long int) max((var_11), (min((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)255)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)84))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) : ((~(arr_3 [i_0])))))))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)1))))))));
                    var_13 ^= ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned short) 134217727LL);
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((_Bool) arr_1 [i_0]))), (((((/* implicit */long long int) ((unsigned int) 18014398507384832LL))) ^ (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) : (-134217728LL)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 416576388U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_4))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)39952), (((unsigned short) (_Bool)1)))))));
            arr_13 [6LL] [i_4] [i_4] = ((((/* implicit */_Bool) (unsigned short)23911)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (-134217721LL));
            arr_14 [i_3] [i_4] = var_5;
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((unsigned short) 18014398507384832LL)))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_17 [i_3] [i_3] = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)11645))))), ((~(1440690930463357136ULL))))));
            arr_18 [(unsigned char)0] [8LL] [8LL] &= ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((((/* implicit */int) arr_9 [i_5])) << (((var_6) - (8347873253215281141LL)))))))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 3; i_6 < 23; i_6 += 4) 
        {
            var_17 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)(-32767 - 1)))));
            arr_22 [i_3] [i_6] &= ((/* implicit */unsigned char) ((735712370U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        }
    }
    var_18 = ((/* implicit */unsigned char) ((int) (!(((_Bool) 14365586723455061944ULL)))));
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
    var_20 *= ((/* implicit */unsigned short) ((max((max((12LL), (((/* implicit */long long int) 3297393020U)))), (((134217720LL) * (12LL))))) << (((((/* implicit */int) (unsigned short)65535)) - (65512)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min(((unsigned char)122), (((/* implicit */unsigned char) (_Bool)0)))))) ? (var_5) : (var_5)));
}
