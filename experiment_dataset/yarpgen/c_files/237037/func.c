/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237037
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
    var_13 = max((min((min((var_5), (var_7))), (((/* implicit */unsigned int) ((4294967295U) != (var_11)))))), (((max((var_10), (var_11))) << (((max((var_11), (1816327291U))) - (1816327269U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1816327276U)) || (((/* implicit */_Bool) 1816327285U)))))) / (((arr_1 [i_0]) << (((1816327273U) - (1816327265U))))));
            arr_7 [12U] [i_0] [12U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1682537847U) % (var_6)))) && (((1306457174U) != (2478639995U)))));
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_14 += ((max((max((arr_8 [i_0]), (2137269555U))), (((var_9) % (arr_2 [i_0]))))) * (max((((/* implicit */unsigned int) ((2115324895U) < (1306457174U)))), (min((arr_0 [i_2]), (var_9))))));
            arr_10 [i_0] [i_0] = min((((1090906834U) & (max((1943704535U), (2351262747U))))), (((max((arr_2 [i_0]), (656046991U))) * (min((0U), (2351262720U))))));
            arr_11 [i_0] = (i_0 % 2 == zero) ? (min((max((((var_8) & (4120096281U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_5 [i_0]))))))), (((max((2758764252U), (arr_4 [i_0]))) >> (((max((arr_0 [i_0]), (var_6))) - (2105391519U))))))) : (min((max((((var_8) & (4120096281U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_5 [i_0]))))))), (((max((2758764252U), (arr_4 [i_0]))) >> (((((max((arr_0 [i_0]), (var_6))) - (2105391519U))) - (4021104542U)))))));
            arr_12 [i_0] = ((((min((arr_0 [i_0]), (1629976881U))) % (min((var_2), (418185170U))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((262143U) % (2123561790U)))) && (((/* implicit */_Bool) min((2902073655U), (var_2)))))))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_15 = max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 2115324895U))))), (min((arr_0 [i_0]), (1943704521U))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0]) != (var_7))))) - (min((var_4), (536870911U))))));
                var_16 |= max((min((((/* implicit */unsigned int) ((arr_9 [i_0] [i_3]) != (arr_9 [i_0] [i_0])))), (min((var_0), (arr_0 [i_2]))))), (max((min((var_2), (var_10))), (((arr_2 [18U]) << (((var_10) - (2223810271U))))))));
                var_17 = max((max((min((var_1), (arr_5 [i_2]))), (max((4294967286U), (var_5))))), (min((min((var_1), (arr_8 [i_0]))), (((/* implicit */unsigned int) ((arr_5 [i_0]) <= (var_4)))))));
                arr_15 [i_0] [i_0] = ((((((1017529611U) ^ (var_5))) * (((var_0) >> (((arr_8 [i_0]) - (3249852515U))))))) << (((max((max((4294967287U), (536870914U))), (min((var_4), (arr_2 [i_0]))))) - (4294967270U))));
                arr_16 [i_0] = max((((4052634087U) * (min((2097151U), (724143056U))))), (min((max((1069763983U), (4294967288U))), (max((var_3), (arr_5 [i_2]))))));
            }
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                var_18 *= max((((((arr_13 [i_0 - 4] [i_2] [i_0] [i_0]) | (var_6))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_8 [i_0])))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) 63U)))) || (((/* implicit */_Bool) max((arr_4 [i_0]), (3181176458U))))))));
                var_19 = ((/* implicit */unsigned int) ((max((min((5U), (2539897498U))), (min((var_10), (var_7))))) > (((((var_5) << (0U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_0] [i_0] [i_4] [i_4]) > (arr_14 [i_0] [i_2] [i_0] [i_0])))))))));
            }
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                var_20 = max((max((((/* implicit */unsigned int) ((var_4) == (arr_1 [i_0 + 1])))), (min((2478640004U), (3330942013U))))), (min((max((var_9), (var_3))), (min((arr_0 [i_0]), (var_6))))));
                arr_23 [i_0] [i_2] [i_2] = (i_0 % 2 == zero) ? (max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 654640180U)) && (((/* implicit */_Bool) arr_3 [i_0] [i_2])))), (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4015959917U))))))), (min((max((var_3), (var_5))), (((var_1) << (((arr_19 [i_0]) - (2706578776U))))))))) : (max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 654640180U)) && (((/* implicit */_Bool) arr_3 [i_0] [i_2])))), (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4015959917U))))))), (min((max((var_3), (var_5))), (((var_1) << (((((arr_19 [i_0]) - (2706578776U))) - (3143072644U)))))))));
            }
        }
        var_21 = ((/* implicit */unsigned int) max((var_21), (min((max((min((2478640005U), (arr_1 [i_0]))), (((/* implicit */unsigned int) ((var_6) != (arr_4 [i_0])))))), (min((min((var_8), (var_3))), (max((arr_8 [i_0]), (var_9)))))))));
        var_22 = ((/* implicit */unsigned int) ((((min((var_1), (arr_14 [i_0] [i_0 + 1] [i_0] [i_0]))) << (((max((var_2), (466055312U))) - (2449116412U))))) > (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2358758608U)) && (((/* implicit */_Bool) 2464545054U)))))) % (((arr_3 [i_0] [i_0]) ^ (1014837299U)))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_8), (arr_20 [0U] [i_0]))), (((var_6) * (arr_13 [i_0] [16U] [i_0] [i_0 - 2])))))) && (((/* implicit */_Bool) ((max((var_12), (1097156365U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((2560818927U) != (var_5)))))))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_24 |= ((/* implicit */unsigned int) ((3828911984U) <= (466055327U)));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 3) 
        {
            var_25 += ((/* implicit */unsigned int) ((((/* implicit */int) ((min((3828911969U), (arr_29 [i_6]))) < (min((2241206546U), (arr_27 [i_6])))))) ^ (((/* implicit */int) ((((var_7) - (2392582345U))) == (min((arr_29 [i_6]), (arr_29 [i_6]))))))));
            var_26 = max((((min((arr_26 [i_6]), (314357192U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_28 [i_7]) < (arr_27 [i_6]))))))), (((/* implicit */unsigned int) ((((466055325U) != (arr_25 [i_6]))) || (((/* implicit */_Bool) max((arr_24 [i_7 + 2]), (2613519723U))))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            arr_32 [i_6] = ((((var_12) * (arr_31 [i_6]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((23U) <= (2053760750U))))));
            var_27 = ((/* implicit */unsigned int) ((((var_12) * (1501200479U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3225203320U)) && (((/* implicit */_Bool) arr_27 [i_6]))))))));
        }
    }
    var_28 = min((min((min((var_4), (var_4))), (((var_1) % (var_3))))), (min((((241474164U) * (var_5))), (max((1069763975U), (2189187704U))))));
}
