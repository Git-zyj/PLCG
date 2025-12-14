/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234764
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
    var_17 = ((/* implicit */short) ((unsigned short) ((long long int) var_10)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) var_4);
                var_19 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 176559958521866978ULL))))) << (((9223372036854775796LL) - (9223372036854775795LL))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) ((1374941942) % (((/* implicit */int) var_11))));
                    var_21 = ((/* implicit */_Bool) ((unsigned short) ((long long int) var_12)));
                }
                for (int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (_Bool)1)))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48356))) + (var_14)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384))) : (8901374832147397724LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1978113093119925255ULL)) ? (((/* implicit */int) (unsigned short)15360)) : (((/* implicit */int) (unsigned short)16379))))) : (((unsigned long long int) var_7))))));
                }
                for (int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned short)50175)))) <= (((((/* implicit */int) var_12)) >> (((/* implicit */int) var_4))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_12)))) || (((/* implicit */_Bool) var_5))))) / ((+(((/* implicit */int) (unsigned short)48356)))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) < (11018882510107697427ULL))))) < ((+(var_8))))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50170))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15351))) * (12218239034905026716ULL)))));
                        var_28 = ((/* implicit */_Bool) ((signed char) var_2));
                    }
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)143)))))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_2))))))))));
                }
            }
        } 
    } 
}
