/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19311
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (-((+(((/* implicit */int) var_8)))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(((/* implicit */int) (signed char)-65)))) : (((/* implicit */int) var_9)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111)))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_2 [12ULL]);
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_16 [19] [i_2] [i_2] [i_4] [i_3 + 2] = ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)20217)) ? (17834796022757393261ULL) : (4903411714535281619ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8738)))))) == (((/* implicit */int) (unsigned char)0)));
                        var_19 = ((/* implicit */int) var_0);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) 17834796022757393261ULL);
                            arr_20 [i_2] = ((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_3] [12ULL]);
                        }
                        var_21 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (unsigned short)17550)) : (-1643528308))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3] [i_4])) > (((/* implicit */int) arr_17 [i_1] [21LL] [i_3 + 1] [21LL] [i_2] [(short)6])))))))) ? (((((/* implicit */int) arr_0 [i_3 - 1])) + ((-2147483647 - 1)))) : (arr_13 [(unsigned short)6] [i_2] [i_3 - 1]));
                    }
                } 
            } 
        } 
        arr_21 [i_1] [0LL] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) arr_12 [i_1] [i_1])))))) ? (((int) (_Bool)1)) : (((/* implicit */int) min(((unsigned short)8), (((/* implicit */unsigned short) (_Bool)1)))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (max((0), (((/* implicit */int) (unsigned short)39848)))) : ((((_Bool)0) ? (((/* implicit */int) var_14)) : (var_6)))))) ? (((/* implicit */int) arr_9 [i_1] [20LL] [i_1] [20])) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)159))))) ? ((~(((/* implicit */int) (unsigned short)45325)))) : ((-(((/* implicit */int) (unsigned short)45318)))))))))));
    }
    var_23 = (unsigned short)24140;
    var_24 = ((/* implicit */unsigned long long int) var_3);
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))) - (((/* implicit */int) (unsigned short)56778))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (signed char)122)))) : (var_7)));
}
