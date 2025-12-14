/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247492
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned long long int) var_2);
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) var_14);
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0 - 1] [i_0]), (((/* implicit */short) var_1)))))) : (((var_0) * (((/* implicit */unsigned long long int) 4294967295U)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) (unsigned char)72)) - (49)))))) : (arr_7 [i_0]))))));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)106), (((/* implicit */unsigned char) max(((signed char)(-127 - 1)), (arr_0 [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)62139)), (0U)))))))) : (((1877347029U) << (((3791312355U) - (3791312338U)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)9247));
                var_21 = ((/* implicit */unsigned int) ((unsigned short) -5820974609087249231LL));
            }
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                arr_17 [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((long long int) (unsigned short)0)) == (-9223372036854775788LL))))));
                var_22 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_2] [i_0 + 1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-2460515819451106143LL), (((/* implicit */long long int) 3791312355U))))) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 3])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_2])))))));
            }
            arr_18 [i_0 - 2] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)184))))), (((4294967295U) << (((4294967295U) - (4294967286U))))))) >> (((((((/* implicit */_Bool) max((arr_2 [i_2] [i_0 - 3]), ((short)32751)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (503654941U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))) - (4294967270ULL)))));
            var_23 = ((/* implicit */long long int) 17325922139242612763ULL);
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_5]))) : (arr_10 [i_0 - 3]))) > (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))) << (((((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_0])) - (85))))))));
            var_25 = ((((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 3]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16988))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9247)))) : (((((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0])) == (((/* implicit */int) (signed char)14))))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0 + 1])), ((unsigned char)0)))))));
        }
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((arr_14 [6LL] [i_0] [(unsigned char)2]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))))) ? (((1U) << (((((/* implicit */int) (unsigned short)56288)) - (56284))))) : (((((/* implicit */_Bool) 0ULL)) ? (2458878350U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9444)) << (((((/* implicit */int) (unsigned short)16988)) - (16980)))))))))))));
    }
    for (unsigned int i_6 = 4; i_6 < 19; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6 - 3] [i_6 - 1] [i_6 - 1]))) > (5ULL)))), (((((/* implicit */_Bool) var_17)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6 - 1] [i_6 - 2] [i_6 + 4])))))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_7])) >> (((((/* implicit */int) arr_28 [i_8] [i_6 - 4] [i_8] [i_6 + 1])) - (29626))))))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3ULL) >> (((((/* implicit */int) var_2)) - (38449)))))) ? (((((/* implicit */int) arr_26 [i_8])) / (((/* implicit */int) arr_25 [i_6 + 2])))) : (((/* implicit */int) max((arr_26 [i_6 + 3]), (arr_25 [i_6 + 2])))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (max((arr_25 [i_6 - 1]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6 - 2] [i_6 + 4] [i_6 - 2]))) == (var_6))))))));
                        arr_42 [i_9] [i_9] [i_10] = ((/* implicit */short) (unsigned char)57);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_12 = 2; i_12 < 21; i_12 += 4) 
    {
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_12 + 1] [i_12 + 1])) << (((4294967295U) - (4294967292U)))))) ? (((var_13) ? (((/* implicit */int) arr_43 [i_12 - 2])) : (((/* implicit */int) arr_43 [i_12 + 2])))) : (((/* implicit */int) min((((unsigned char) 0U)), (arr_43 [i_12])))))))));
        var_32 = ((/* implicit */unsigned short) arr_43 [i_12]);
    }
    var_33 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967295U)), (var_16)));
    var_34 += ((/* implicit */_Bool) var_17);
    var_35 = var_4;
}
