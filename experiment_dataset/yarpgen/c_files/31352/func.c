/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31352
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
    var_16 &= max((((/* implicit */unsigned long long int) (unsigned char)234)), (((var_15) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31759))) ^ (var_1))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [(short)14] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_0 - 1])) - (((/* implicit */int) arr_1 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 3368819863182047582LL)))))))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_11)) : (var_14))))))));
                    arr_9 [18LL] [i_1] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_12))) ^ (((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))))) ? ((+(-1))) : (((/* implicit */int) var_4))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3368819863182047569LL)) ? (arr_4 [i_0] [(short)4] [(unsigned char)4]) : (arr_6 [i_0] [i_0] [(short)18])))) ? (((/* implicit */unsigned int) (-(4)))) : (((1505386402U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-29474))))))), (((/* implicit */unsigned int) (unsigned short)6728))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (((-(((/* implicit */int) arr_5 [i_3 - 1] [i_3 + 1])))) != (((((/* implicit */_Bool) ((arr_7 [(signed char)8] [(signed char)8] [i_3] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((short) var_4))) : (((int) var_10)))))))));
        arr_12 [5ULL] [(signed char)0] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)170)), (arr_0 [0U] [i_3 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3]))) & (var_9)))))))) + (min((4004872597U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-22349)) % (4))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (unsigned short i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_1 [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_2))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)106)) << (((1888883838U) - (1888883820U))))))))) : (((((/* implicit */_Bool) ((var_6) - (arr_4 [7U] [i_4] [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_3))))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_10 [20U] [i_4]))))))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
                    }
                } 
            } 
            var_22 -= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_12)), (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_13))))))))));
        }
    }
}
