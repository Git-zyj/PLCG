/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240283
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
    var_11 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)-34))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)34)))))))) + ((~(((/* implicit */int) ((5933542961470348899ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] = arr_2 [i_0];
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_2 [i_0 + 1]))), ((+(((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_14 = ((/* implicit */unsigned char) (((-(((5933542961470348906ULL) ^ (((/* implicit */unsigned long long int) var_10)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)34)) > ((-2147483647 - 1))))) > (((/* implicit */int) ((5933542961470348899ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned char) max(((~(arr_4 [i_1] [4]))), (max((arr_4 [i_1] [i_1]), (((/* implicit */int) arr_1 [(signed char)2]))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(12513201112239202717ULL)))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3106)))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) ((((var_3) > (((/* implicit */int) arr_1 [(_Bool)1])))) || (((17592186044415ULL) > (((/* implicit */unsigned long long int) -3675411748649750765LL))))))))))));
        arr_7 [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) <= (5933542961470348896ULL)))))))) | (12513201112239202717ULL));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */signed char) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(17592186044423ULL))))))));
        /* LoopNest 2 */
        for (short i_3 = 4; i_3 < 11; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_9 [i_2]))));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)124)) > (((/* implicit */int) (signed char)14))));
                    var_20 = ((/* implicit */unsigned char) (((+(min((((/* implicit */unsigned long long int) (signed char)-34)), (18446726481523507175ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47)))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_1 [(_Bool)1]), (((/* implicit */unsigned short) arr_6 [i_2])))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [(unsigned char)18])) : (arr_5 [i_2])))))) : (5933542961470348916ULL))))));
    }
    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) (signed char)-104)))) : (((/* implicit */int) ((17592186044402ULL) >= (12513201112239202717ULL))))));
    var_23 = ((/* implicit */signed char) ((5933542961470348888ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4)))));
    var_24 &= ((/* implicit */unsigned char) ((((5933542961470348899ULL) << (((1470814727) - (1470814702))))) % (((/* implicit */unsigned long long int) var_10))));
}
