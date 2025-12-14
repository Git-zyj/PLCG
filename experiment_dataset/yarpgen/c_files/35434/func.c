/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35434
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))))) <= (((arr_6 [i_1] [i_2] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))))))))) % (min((max((((/* implicit */unsigned int) (unsigned char)67)), (4028031352U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_7 [i_0] [i_0])), ((unsigned char)70)))))))))));
                        var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((arr_3 [i_3 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_3 + 1]))))), (((unsigned int) (unsigned char)197))));
                        arr_13 [i_3] [i_3] [i_2] [i_0] [i_0] [i_3] = ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55471))) / (6752079877191555584ULL))), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_3 + 1])))) >= (((/* implicit */unsigned long long int) ((arr_1 [i_1]) ? (((/* implicit */long long int) (-(0U)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) | (arr_6 [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (max((4294967295U), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_3 [i_0])), (arr_4 [i_0])))))));
        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((/* implicit */int) min((var_4), (arr_7 [6U] [6U]))))))), (min((((/* implicit */unsigned int) max(((_Bool)1), (arr_1 [i_0])))), ((+(266935955U)))))));
        var_19 = ((/* implicit */unsigned short) var_13);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            arr_17 [(short)10] [(short)10] = ((/* implicit */_Bool) (unsigned short)60764);
            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)12144)))) % ((~(11ULL)))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(short)7])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6752079877191555584ULL)))))) : (((((/* implicit */_Bool) (short)120)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_15))))));
            arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (short)-1752))) ? (((/* implicit */int) ((unsigned short) ((unsigned int) (unsigned char)191)))) : (((/* implicit */int) ((unsigned char) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(signed char)8])))))))));
            var_21 = ((/* implicit */_Bool) ((((arr_12 [i_5] [i_5] [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))))) / (max((arr_12 [i_5] [i_5] [i_5] [i_0]), (((/* implicit */unsigned int) (unsigned char)57))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_25 [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_8))))));
            arr_26 [(short)10] [i_6] = ((/* implicit */short) (-((-(((/* implicit */int) (signed char)-113))))));
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) 4064528160U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_6]))))));
            var_22 -= ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_6] [i_0] [i_0]));
        }
    }
    var_23 = ((/* implicit */unsigned char) ((long long int) (((!(((/* implicit */_Bool) (signed char)102)))) ? (4789718278851966151LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)145))))))));
}
