/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202849
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (10128256534277497986ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-41))))) : (max((292198710329707527ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 17; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) var_9)))), (((var_3) ? (var_5) : (((/* implicit */int) (signed char)58))))))) ? (((/* implicit */unsigned long long int) ((min((1438436885804180580LL), (3118664172420332352LL))) & (((((/* implicit */_Bool) (signed char)70)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)52)))))))) : ((+(14619359058920572103ULL)))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -3118664172420332380LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) -5885401510481392562LL)))) : (((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (6509132119456506145LL)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) min((((((/* implicit */int) min(((unsigned short)11), ((unsigned short)60148)))) + ((+(((/* implicit */int) var_8)))))), (((/* implicit */int) min((arr_1 [18ULL] [i_1 + 3]), (((/* implicit */signed char) var_10)))))));
                    }
                } 
            } 
            var_16 = ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3118664172420332382LL));
        }
        for (int i_4 = 3; i_4 < 17; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 4; i_5 < 20; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            arr_23 [i_5] [i_4 + 3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)1859))))), (min((var_7), (((/* implicit */unsigned int) (signed char)-30))))));
                            var_17 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -3250394958017779965LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : (-3118664172420332370LL)))));
                            var_18 += min(((-(var_11))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_2))))));
                            var_19 -= ((/* implicit */unsigned short) (+(max((-3118664172420332357LL), (((/* implicit */long long int) arr_6 [i_0]))))));
                        }
                    } 
                } 
            } 
            var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -4657829512806800684LL)))))));
            arr_24 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) max(((short)25163), (((/* implicit */short) (signed char)(-127 - 1))))))))) ? (((((/* implicit */_Bool) max((-4657829512806800679LL), (var_12)))) ? (arr_20 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 4] [i_4 + 4]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) max((var_1), ((_Bool)0))))) / ((+(-4657829512806800683LL)))))));
            arr_25 [i_0] [4U] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [i_4 + 3] [i_4 - 3])) : (((((/* implicit */_Bool) arr_12 [i_0] [i_4])) ? (((/* implicit */int) (short)25733)) : (-1810206407))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_4 - 2] [i_4 - 3])) || (((/* implicit */_Bool) 3250394958017779965LL)))))));
        }
        arr_26 [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_10 [i_0]))))));
        var_21 = ((/* implicit */short) (_Bool)1);
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (min((var_13), (var_0))))))) : (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), ((_Bool)1)))))))));
    var_23 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) max((((/* implicit */unsigned short) (short)-16861)), ((unsigned short)26840))))))));
    var_24 = ((/* implicit */short) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((var_14), (-3118664172420332392LL)))));
}
