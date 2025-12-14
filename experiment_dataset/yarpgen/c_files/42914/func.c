/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42914
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((_Bool) (signed char)122)))))));
    var_13 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_11))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_1))));
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [(unsigned char)0] [(unsigned char)0])), (4964856986240946074LL)))) ? (((/* implicit */int) min((arr_1 [(signed char)10] [(signed char)10]), (arr_0 [i_0])))) : ((-(((/* implicit */int) (signed char)7))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (((((/* implicit */_Bool) arr_2 [(unsigned short)2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) : (5859021695581650337LL)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */int) arr_0 [i_0]))));
            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
            arr_8 [i_0] = (unsigned char)198;
            var_16 = ((/* implicit */unsigned char) -4964856986240946074LL);
            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) << (((((/* implicit */int) arr_0 [i_0])) + (81)))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)122)))))));
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned short i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_19 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) (~(arr_13 [i_4] [i_4 - 3])));
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_22 [i_4] [i_3] [i_6] [i_4] [i_6] = ((/* implicit */_Bool) (signed char)106);
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_6] [i_4] [i_3] [i_3] [i_2] [i_2]))))) ? (((unsigned int) var_1)) : (var_8)));
                    }
                    var_20 &= arr_20 [i_3] [i_2];
                }
            } 
        } 
        var_21 &= ((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2]);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_9 [i_2]))));
        arr_23 [i_2] [i_2] = ((/* implicit */signed char) (~(arr_13 [i_2] [i_2])));
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-107)), (var_10)))) ? (((/* implicit */int) ((signed char) (signed char)18))) : (((/* implicit */int) (signed char)97))))) >= (min((((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (arr_13 [i_7] [i_7]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)115)), (arr_11 [i_7] [i_7] [i_7]))))))))));
        arr_27 [i_7] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3526)) * (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)96))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_7] [i_7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) && (((/* implicit */_Bool) var_3)))))) : ((-(((((/* implicit */_Bool) var_2)) ? (arr_11 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))))));
    }
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_20 [i_8] [i_8]), (arr_20 [16ULL] [i_8])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)69)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned char)13])))))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_8] [i_8] [19U])) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) var_7))))), ((+(arr_9 [i_8]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (2065544873U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69)))))) ? (arr_10 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8] [i_8] [i_8])))))))));
        arr_31 [i_8] &= ((/* implicit */long long int) var_6);
    }
}
