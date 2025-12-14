/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215158
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
    var_15 = ((/* implicit */unsigned short) (+(-3147125559846462220LL)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) max(((-(((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))))))), (min((var_6), (((/* implicit */unsigned long long int) var_9))))));
        var_17 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)54129)) : (1702051470)))) ? (var_7) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)57908)))))) : (((/* implicit */unsigned long long int) max((1702051470), (1702051470)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */long long int) var_13))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) | (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (var_6))))))))));
        arr_6 [i_1] [14] = max((min((((((/* implicit */_Bool) (unsigned short)51985)) ? (((/* implicit */int) (unsigned short)13550)) : (((/* implicit */int) (unsigned short)51985)))), (var_11))), (arr_2 [i_1]));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_1]) : (arr_3 [i_1])))) * ((-(arr_1 [i_1]))))) * (max((((/* implicit */unsigned long long int) max((var_12), (arr_2 [i_1])))), (18446744073709551615ULL)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_20 = min((((/* implicit */unsigned long long int) max((arr_10 [i_2]), (var_8)))), (min((((var_4) ^ (var_1))), (((13944394208148410763ULL) & (var_6))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (unsigned char i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                {
                    var_21 -= ((((/* implicit */_Bool) 15079215804893385993ULL)) ? (max((((/* implicit */unsigned long long int) 0LL)), (0ULL))) : (((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (5364854568098537341ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))))));
                    var_22 = ((/* implicit */long long int) (~(var_12)));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)13550)) ? (((/* implicit */int) arr_8 [(unsigned char)5])) : (((/* implicit */int) (unsigned char)214)))))) ? (((var_1) & (((((/* implicit */_Bool) (unsigned char)246)) ? (18446744073709551615ULL) : (6318418637272202159ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 11747057646973919566ULL))))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4] [i_4 - 3])) ? (((/* implicit */unsigned long long int) 0)) : (var_6)))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) 0)) * (var_3)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13550))) : (15281454347116448614ULL))) : (max((13157006739749054554ULL), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((1393778261383751970ULL) << (((5289737333960497062ULL) - (5289737333960497049ULL))))) < ((~(var_5)))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) 1685675030))))) && (((/* implicit */_Bool) min((1393778261383751970ULL), (var_7))))))));
    var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13550)) << (((var_6) - (7023763598926681201ULL))))))))) ? (max((var_6), (var_5))) : (var_10)));
}
